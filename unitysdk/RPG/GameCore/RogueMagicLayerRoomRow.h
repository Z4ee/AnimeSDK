#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B45500)
#define RPG_GAMECORE_ROGUEMAGICLAYERROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B45620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicLayerRoomRow_TypeDefinitionIndex = 14123;

	class RogueMagicLayerRoomRow : public ::System::Object
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::System::UInt32 RoomIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicLayerRoomRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicLayerRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICLAYERROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
