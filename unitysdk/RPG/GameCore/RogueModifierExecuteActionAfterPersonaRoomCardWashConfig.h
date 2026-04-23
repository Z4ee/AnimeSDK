#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_4CD0953C730ABC50_OFFSET UNITYSDK_OFFSET(0x18D3C5F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_7C7F36E0F59BFCA9_OFFSET UNITYSDK_OFFSET(0x18D34640)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D345F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterPersonaRoomCardWashConfig_TypeDefinitionIndex = 16914;

	class RogueModifierExecuteActionAfterPersonaRoomCardWashConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CD0953C730ABC50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_4CD0953C730ABC50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C7F36E0F59BFCA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_7C7F36E0F59BFCA9_OFFSET))(a1, a2);
		}
	};
}
