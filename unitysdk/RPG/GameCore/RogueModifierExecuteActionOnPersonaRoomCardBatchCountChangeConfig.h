#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDBATCHCOUNTCHANGECONFIG_METHOD_3_226E7FAAB0D8FAC5_OFFSET UNITYSDK_OFFSET(0x18D3DC50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDBATCHCOUNTCHANGECONFIG_METHOD_3_B2877A97B5B933BC_OFFSET UNITYSDK_OFFSET(0x18D3DD20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDBATCHCOUNTCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3DCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardBatchCountChangeConfig_TypeDefinitionIndex = 16900;

	class RogueModifierExecuteActionOnPersonaRoomCardBatchCountChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDBATCHCOUNTCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_226E7FAAB0D8FAC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardBatchCountChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardBatchCountChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDBATCHCOUNTCHANGECONFIG_METHOD_3_226E7FAAB0D8FAC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2877A97B5B933BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardBatchCountChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardBatchCountChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDBATCHCOUNTCHANGECONFIG_METHOD_3_B2877A97B5B933BC_OFFSET))(a1, a2);
		}
	};
}
