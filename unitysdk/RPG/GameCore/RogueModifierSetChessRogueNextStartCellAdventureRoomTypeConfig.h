#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_METHOD_3_0D1C13FA552935F0_OFFSET UNITYSDK_OFFSET(0x19B9C240)
#define RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_METHOD_3_DB8F44B55C087E99_OFFSET UNITYSDK_OFFSET(0x19B9C170)
#define RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9C1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig_TypeDefinitionIndex = 17085;

	class RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB8F44B55C087E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_METHOD_3_DB8F44B55C087E99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D1C13FA552935F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_METHOD_3_0D1C13FA552935F0_OFFSET))(a1, a2);
		}
	};
}
