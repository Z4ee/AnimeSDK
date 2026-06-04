#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_METHOD_3_13BB9B9D225F45E7_OFFSET UNITYSDK_OFFSET(0x19892BF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_METHOD_3_1EEE31AE68EDA0DB_OFFSET UNITYSDK_OFFSET(0x19892CC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19892CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyHasteConfig_TypeDefinitionIndex = 20170;

	class LittleGameAbilityEffectApplyHasteConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* HasteDuration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13BB9B9D225F45E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_METHOD_3_13BB9B9D225F45E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EEE31AE68EDA0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_METHOD_3_1EEE31AE68EDA0DB_OFFSET))(a1, a2);
		}
	};
}
