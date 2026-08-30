#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/RPG/GameCore/RogueTournVariantType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCCB3A0)
#define RPG_GAMECORE_ROGUETOURNROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCB570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomRow_TypeDefinitionIndex = 14797;

	class RogueTournRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 RogueRoomID; // 0x10
		::RPG::GameCore::RogueTournRoomType RogueRoomType; // 0x14
		::RPG::GameCore::RogueTournVariantType VariantType; // 0x18
		::RPG::GameCore::RogueTournMode TournMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournRoomRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
