#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleAbilityConditionChecker; }
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGABILITYCONFIG_METHOD_2_8861A2F6987B016C_OFFSET UNITYSDK_OFFSET(0x1E0054A0)
#define RPG_GAMECORE_CHENLINGABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0056B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingAbilityConfig_TypeDefinitionIndex = 15532;

	class ChenLingAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* AbilitySequence; // 0x10
		::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* AbilityCastCondition; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* CDTime; // 0x20
		::System::Boolean IsReleasedOnlyOnce; // 0x28
		::Il2CppArray<::System::String*>* PreLoadResList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8861A2F6987B016C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGABILITYCONFIG_METHOD_2_8861A2F6987B016C_OFFSET))(a1, a2);
		}
	};
}
