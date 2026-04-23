#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6B1A0)
#define RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6B310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournAdventureRoomRow_TypeDefinitionIndex = 14171;

	class RogueTournAdventureRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 ParamGroupID; // 0x10
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x14
		::System::UInt32 RoomID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournAdventureRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournAdventureRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNADVENTUREROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
