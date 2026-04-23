#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_METHOD_3_1A72A4BFCF327374_OFFSET UNITYSDK_OFFSET(0x18D3EB20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_METHOD_3_865493D7D0025CBD_OFFSET UNITYSDK_OFFSET(0x18D3EA50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3EAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionSamePersonaRoomCardNumConfig_TypeDefinitionIndex = 16915;

	class RogueModifierExecuteActionSamePersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_865493D7D0025CBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_METHOD_3_865493D7D0025CBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A72A4BFCF327374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_METHOD_3_1A72A4BFCF327374_OFFSET))(a1, a2);
		}
	};
}
