#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB3EF0)
#define RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB4060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAdventureRoomRow_TypeDefinitionIndex = 14277;

	class RogueMagicAdventureRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 ParamGroupID; // 0x10
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x14
		::System::UInt32 RoomID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicAdventureRoomRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicAdventureRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICADVENTUREROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
