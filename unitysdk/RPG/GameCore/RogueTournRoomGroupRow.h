#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNROOMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D48E390)
#define RPG_GAMECORE_ROGUETOURNROOMGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomGroupRow_TypeDefinitionIndex = 14795;

	class RogueTournRoomGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTournRoomType>* RoomTypeList; // 0x10
		::System::UInt32 RoomGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournRoomGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournRoomGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
