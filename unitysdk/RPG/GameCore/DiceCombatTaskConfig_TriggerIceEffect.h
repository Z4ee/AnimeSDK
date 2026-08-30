#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/IceEffectMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_12F22D0E6134DFC3_OFFSET UNITYSDK_OFFSET(0x1DB07A80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_CD7DA319DCB69037_OFFSET UNITYSDK_OFFSET(0x1DB07AE0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB07AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerIceEffect_TypeDefinitionIndex = 15922;

	class DiceCombatTaskConfig_TriggerIceEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x18
		::RPG::GameCore::IceEffectMode Mode; // 0x20
		::RPG::GameCore::DynamicFloat* ContentID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12F22D0E6134DFC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_12F22D0E6134DFC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD7DA319DCB69037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_CD7DA319DCB69037_OFFSET))(a1, a2);
		}
	};
}
