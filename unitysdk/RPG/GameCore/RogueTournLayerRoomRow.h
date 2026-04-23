#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNLAYERROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D78BF0)
#define RPG_GAMECORE_ROGUETOURNLAYERROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D78E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournLayerRoomRow_TypeDefinitionIndex = 14164;

	class RogueTournLayerRoomRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Door1; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Door3; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Door2; // 0x20
		::System::UInt32 RoomIndex; // 0x28
		::System::UInt32 LayerID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYERROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournLayerRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournLayerRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYERROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
