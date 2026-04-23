#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERROOMTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C35BD0)
#define RPG_GAMECORE_PLAYERROOMTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C35D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomTagConfigRow_TypeDefinitionIndex = 13755;

	class PlayerRoomTagConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerRoomTagConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRoomTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMTAGCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
