#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/IceEffectMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_5AADE336FD72A4F2_OFFSET UNITYSDK_OFFSET(0x196BA440)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_CD7DA319DCB69037_OFFSET UNITYSDK_OFFSET(0x196B60D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196B6080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerIceEffect_TypeDefinitionIndex = 15321;

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

		static ::System::Void Method_3_5AADE336FD72A4F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_5AADE336FD72A4F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD7DA319DCB69037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_CD7DA319DCB69037_OFFSET))(a1, a2);
		}
	};
}
