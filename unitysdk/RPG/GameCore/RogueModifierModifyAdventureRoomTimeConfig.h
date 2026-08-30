#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_METHOD_3_7A806B6CEDB90074_OFFSET UNITYSDK_OFFSET(0x1EEFA2F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_METHOD_3_85C42D865A7A8A70_OFFSET UNITYSDK_OFFSET(0x1EEFA340)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFA330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyAdventureRoomTimeConfig_TypeDefinitionIndex = 17756;

	class RogueModifierModifyAdventureRoomTimeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A806B6CEDB90074(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_METHOD_3_7A806B6CEDB90074_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85C42D865A7A8A70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_METHOD_3_85C42D865A7A8A70_OFFSET))(a1, a2);
		}
	};
}
