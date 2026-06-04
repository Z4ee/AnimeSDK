#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_METHOD_3_1CF398776644FA49_OFFSET UNITYSDK_OFFSET(0x19894BA0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_METHOD_3_3DA18C647B8FB2F4_OFFSET UNITYSDK_OFFSET(0x19894B00)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19894B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectStartStormConfig_TypeDefinitionIndex = 20193;

	class LittleGameAbilityPixAirEffectStartStormConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DA18C647B8FB2F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_METHOD_3_3DA18C647B8FB2F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CF398776644FA49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_METHOD_3_1CF398776644FA49_OFFSET))(a1, a2);
		}
	};
}
