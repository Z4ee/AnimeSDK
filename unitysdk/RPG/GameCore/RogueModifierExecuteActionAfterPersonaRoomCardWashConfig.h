#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_7C7F36E0F59BFCA9_OFFSET UNITYSDK_OFFSET(0x1CFBFAD0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_A46AD0742F8C5625_OFFSET UNITYSDK_OFFSET(0x1CFBFA80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterPersonaRoomCardWashConfig_TypeDefinitionIndex = 17091;

	class RogueModifierExecuteActionAfterPersonaRoomCardWashConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A46AD0742F8C5625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_A46AD0742F8C5625_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C7F36E0F59BFCA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_METHOD_3_7C7F36E0F59BFCA9_OFFSET))(a1, a2);
		}
	};
}
