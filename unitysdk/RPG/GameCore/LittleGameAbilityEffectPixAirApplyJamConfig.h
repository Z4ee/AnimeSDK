#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_METHOD_3_C6BA3AF66177956B_OFFSET UNITYSDK_OFFSET(0x19893230)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_METHOD_3_F6E974D2B27889F7_OFFSET UNITYSDK_OFFSET(0x19893160)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19893220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectPixAirApplyJamConfig_TypeDefinitionIndex = 20172;

	class LittleGameAbilityEffectPixAirApplyJamConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* JamDuration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F6E974D2B27889F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_METHOD_3_F6E974D2B27889F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6BA3AF66177956B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_METHOD_3_C6BA3AF66177956B_OFFSET))(a1, a2);
		}
	};
}
