#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C359C0)
#define RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C35BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomSubAreaConfigRow_TypeDefinitionIndex = 13751;

	class PlayerRoomSubAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 StaticCameraID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
