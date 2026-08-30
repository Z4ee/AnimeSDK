#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOWNERROOMCARDLEVELCHANGECONFIG_METHOD_3_2DD8337F63DE6FE8_OFFSET UNITYSDK_OFFSET(0x1D3F8620)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOWNERROOMCARDLEVELCHANGECONFIG_METHOD_3_A4842D4ABB22D524_OFFSET UNITYSDK_OFFSET(0x1D3F8670)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOWNERROOMCARDLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnOwnerRoomCardLevelChangeConfig_TypeDefinitionIndex = 17478;

	class RogueModifierExecuteActionOnOwnerRoomCardLevelChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOWNERROOMCARDLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2DD8337F63DE6FE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnOwnerRoomCardLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnOwnerRoomCardLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOWNERROOMCARDLEVELCHANGECONFIG_METHOD_3_2DD8337F63DE6FE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4842D4ABB22D524(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnOwnerRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnOwnerRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOWNERROOMCARDLEVELCHANGECONFIG_METHOD_3_A4842D4ABB22D524_OFFSET))(a1, a2);
		}
	};
}
