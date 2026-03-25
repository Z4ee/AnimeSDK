#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_34DA52CF4C605E12_OFFSET UNITYSDK_OFFSET(0x17033D20)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_E4A60E91BAABD74A_OFFSET UNITYSDK_OFFSET(0x17033DF0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17033DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetCustomUnselectable_TypeDefinitionIndex = 21757;

	class ByIsTargetCustomUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34DA52CF4C605E12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_34DA52CF4C605E12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4A60E91BAABD74A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_E4A60E91BAABD74A_OFFSET))(a1, a2);
		}
	};
}
