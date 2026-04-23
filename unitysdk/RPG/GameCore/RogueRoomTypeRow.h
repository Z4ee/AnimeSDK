#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEROOMTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D66A80)
#define RPG_GAMECORE_ROGUEROOMTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D67310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomTypeRow_TypeDefinitionIndex = 13916;

	class RogueRoomTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueRoomTypeIcon; // 0x10
		::System::String* RoomIconEffect; // 0x18
		::RPG::Client::TextID RoomTypeDescTextmapID2; // 0x20
		::System::UInt32 RogueRoomType; // 0x30
		::System::Boolean IsSuper; // 0x34
		::System::Boolean MapShowType; // 0x35
		::RPG::Client::TextID RogueRoomTypeTextmapID; // 0x38
		::RPG::Client::TextID RoomTypeDescTextmapID; // 0x48

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
