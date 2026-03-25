#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATABILITYCONFIG_METHOD_2_BB75DE57E4C1D148_OFFSET UNITYSDK_OFFSET(0x1715CCB0)
#define RPG_GAMECORE_DICECOMBATABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1715CE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAbilityConfig_TypeDefinitionIndex = 14799;

	class DiceCombatAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnAdd; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BB75DE57E4C1D148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATABILITYCONFIG_METHOD_2_BB75DE57E4C1D148_OFFSET))(a1, a2);
		}
	};
}
