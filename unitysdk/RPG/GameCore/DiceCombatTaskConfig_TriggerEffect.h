#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatEffectSubType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_40430CE3115C3A81_OFFSET UNITYSDK_OFFSET(0x1C11ADA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_BF4BA382483E67C7_OFFSET UNITYSDK_OFFSET(0x1C11AD40)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11AD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerEffect_TypeDefinitionIndex = 15426;

	class DiceCombatTaskConfig_TriggerEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatEffectSubType SubType; // 0x10
		::System::UInt32 EffectID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF4BA382483E67C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_BF4BA382483E67C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40430CE3115C3A81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_40430CE3115C3A81_OFFSET))(a1, a2);
		}
	};
}
