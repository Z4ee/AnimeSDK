#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_METHOD_3_5B51FF5CCAED9C6E_OFFSET UNITYSDK_OFFSET(0x1D1F9880)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_METHOD_3_D4E0B95EC6838BA2_OFFSET UNITYSDK_OFFSET(0x1D1F97B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F9870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectReduceBaseCooldownConfig_TypeDefinitionIndex = 21102;

	class LittleGameAbilityEffectReduceBaseCooldownConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* ReduceValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4E0B95EC6838BA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_METHOD_3_D4E0B95EC6838BA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B51FF5CCAED9C6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_METHOD_3_5B51FF5CCAED9C6E_OFFSET))(a1, a2);
		}
	};
}
