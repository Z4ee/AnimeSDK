#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CE7800)
#define RPG_GAMECORE_ROGUEADVENTUREROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureRoomRow_TypeDefinitionIndex = 13912;

	class RogueAdventureRoomRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x10
		::System::UInt32 RoomID; // 0x14
		::System::UInt32 ParamGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueAdventureRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
