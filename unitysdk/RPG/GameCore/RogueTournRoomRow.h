#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/RPG/GameCore/RogueTournVariantType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1766E1E0)
#define RPG_GAMECORE_ROGUETOURNROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1766E3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomRow_TypeDefinitionIndex = 13698;

	class RogueTournRoomRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournMode TournMode; // 0x10
		::RPG::GameCore::RogueTournVariantType VariantType; // 0x14
		::RPG::GameCore::RogueTournRoomType RogueRoomType; // 0x18
		::System::UInt32 RogueRoomID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
