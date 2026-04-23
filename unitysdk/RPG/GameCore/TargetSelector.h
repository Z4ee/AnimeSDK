#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_38016205646F6A8A_OFFSET UNITYSDK_OFFSET(0x18EE1470)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_EFC128BD1419043E_OFFSET UNITYSDK_OFFSET(0x18EEA530)
#define RPG_GAMECORE_TARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE1420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSelector_TypeDefinitionIndex = 22889;

	class TargetSelector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::RPG::GameCore::TargetEvaluator* SuccTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* FailTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EFC128BD1419043E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_EFC128BD1419043E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38016205646F6A8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_38016205646F6A8A_OFFSET))(a1, a2);
		}
	};
}
