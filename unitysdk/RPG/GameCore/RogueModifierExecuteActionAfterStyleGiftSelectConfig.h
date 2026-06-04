#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_2C6DC3E112F3E558_OFFSET UNITYSDK_OFFSET(0x19B50740)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_D9F3B163F0FC7381_OFFSET UNITYSDK_OFFSET(0x19B5C3A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B506F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterStyleGiftSelectConfig_TypeDefinitionIndex = 16983;

	class RogueModifierExecuteActionAfterStyleGiftSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9F3B163F0FC7381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_D9F3B163F0FC7381_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C6DC3E112F3E558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERSTYLEGIFTSELECTCONFIG_METHOD_3_2C6DC3E112F3E558_OFFSET))(a1, a2);
		}
	};
}
