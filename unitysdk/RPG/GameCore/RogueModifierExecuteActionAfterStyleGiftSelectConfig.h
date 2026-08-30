#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_204165EC6C8B961C_OFFSET UNITYSDK_OFFSET(0x1EEF8510)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_2C6DC3E112F3E558_OFFSET UNITYSDK_OFFSET(0x1EEF8560)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF8550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterStyleGiftSelectConfig_TypeDefinitionIndex = 17660;

	class RogueModifierExecuteActionAfterStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_204165EC6C8B961C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_204165EC6C8B961C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C6DC3E112F3E558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_2C6DC3E112F3E558_OFFSET))(a1, a2);
		}
	};
}
