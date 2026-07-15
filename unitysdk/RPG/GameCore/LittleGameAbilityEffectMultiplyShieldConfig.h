#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_METHOD_3_00580BEEDAD158D1_OFFSET UNITYSDK_OFFSET(0x1B092A80)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_METHOD_3_4852F881812C7825_OFFSET UNITYSDK_OFFSET(0x1B092B50)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B092B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectMultiplyShieldConfig_TypeDefinitionIndex = 20551;

	class LittleGameAbilityEffectMultiplyShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Multiplier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_00580BEEDAD158D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_METHOD_3_00580BEEDAD158D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4852F881812C7825(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_METHOD_3_4852F881812C7825_OFFSET))(a1, a2);
		}
	};
}
