#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_METHOD_3_368CE4E7594F140F_OFFSET UNITYSDK_OFFSET(0x1B0923C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_METHOD_3_3CBEAE46FEE0E423_OFFSET UNITYSDK_OFFSET(0x1B092490)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B092480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyBurnConfig_TypeDefinitionIndex = 20541;

	class LittleGameAbilityEffectApplyBurnConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BurnCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_368CE4E7594F140F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_METHOD_3_368CE4E7594F140F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CBEAE46FEE0E423(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_METHOD_3_3CBEAE46FEE0E423_OFFSET))(a1, a2);
		}
	};
}
