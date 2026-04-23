#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }

#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_METHOD_4_97D2EAC174F075A4_OFFSET UNITYSDK_OFFSET(0x190E3B40)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_METHOD_4_B8B4575AB9CB3BDD_OFFSET UNITYSDK_OFFSET(0x190E37A0)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x190E3AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixBasePredicate_TypeDefinitionIndex = 22325;

	class UniversalHotFixBasePredicate : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::UniversalHotFixTaskConfig* ParamConfig; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B8B4575AB9CB3BDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixBasePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixBasePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_METHOD_4_B8B4575AB9CB3BDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97D2EAC174F075A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_METHOD_4_97D2EAC174F075A4_OFFSET))(a1, a2);
		}
	};
}
