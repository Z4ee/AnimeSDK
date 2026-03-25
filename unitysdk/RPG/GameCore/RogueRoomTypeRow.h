#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEROOMTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17658FD0)
#define RPG_GAMECORE_ROGUEROOMTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17659860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomTypeRow_TypeDefinitionIndex = 13443;

	class RogueRoomTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueRoomTypeIcon; // 0x10
		::System::String* RoomIconEffect; // 0x18
		::RPG::Client::TextID RoomTypeDescTextmapID; // 0x20
		::RPG::Client::TextID RogueRoomTypeTextmapID; // 0x30
		::RPG::Client::TextID RoomTypeDescTextmapID2; // 0x40
		::System::UInt32 RogueRoomType; // 0x50
		::System::Boolean IsSuper; // 0x54
		::System::Boolean MapShowType; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueRoomTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueRoomTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
