#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICROOMMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176146F0)
#define RPG_GAMECORE_ROGUEMAGICROOMMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176149A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicRoomMarkRow_TypeDefinitionIndex = 13595;

	class RogueMagicRoomMarkRow : public ::System::Object
	{
	public:
		::System::String* RoomIconEffect; // 0x10
		::System::String* ToastIcon; // 0x18
		::System::String* RoomTypeIcon; // 0x20
		::RPG::Client::TextID RoomTypeName; // 0x28
		::RPG::GameCore::RogueMagicMarkType MarkType; // 0x38
		::RPG::GameCore::RogueMagicRoomType RoomType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICROOMMARKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicRoomMarkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicRoomMarkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICROOMMARKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
