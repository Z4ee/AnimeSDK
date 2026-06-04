#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_METHOD_3_9822AE7EB57937E3_OFFSET UNITYSDK_OFFSET(0x198933B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_METHOD_3_FA2E597FDCA0F162_OFFSET UNITYSDK_OFFSET(0x19893450)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19893440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectPixAirInstantUseConfig_TypeDefinitionIndex = 20173;

	class LittleGameAbilityEffectPixAirInstantUseConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9822AE7EB57937E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_METHOD_3_9822AE7EB57937E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA2E597FDCA0F162(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_METHOD_3_FA2E597FDCA0F162_OFFSET))(a1, a2);
		}
	};
}
