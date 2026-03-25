#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17613EE0)
#define RPG_GAMECORE_ROGUEMAGICLAYERROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17614000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicLayerRoomRow_TypeDefinitionIndex = 13587;

	class RogueMagicLayerRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 RoomIndex; // 0x10
		::System::UInt32 LayerID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicLayerRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicLayerRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
