#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_METHOD_3_5A4CCCA963F828D6_OFFSET UNITYSDK_OFFSET(0x1D1F8E70)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_METHOD_3_83D28FED88B8FB0A_OFFSET UNITYSDK_OFFSET(0x1D1F8DA0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F8E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyChargeConfig_TypeDefinitionIndex = 21096;

	class LittleGameAbilityEffectApplyChargeConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* ChargeValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83D28FED88B8FB0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_METHOD_3_83D28FED88B8FB0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A4CCCA963F828D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_METHOD_3_5A4CCCA963F828D6_OFFSET))(a1, a2);
		}
	};
}
