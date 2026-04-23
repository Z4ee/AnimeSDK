#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AD2300)
#define RPG_GAMECORE_MAZEPLANEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD2A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePlaneRow_TypeDefinitionIndex = 13298;

	class MazePlaneRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::RPG::GameCore::PlaneType PlaneType; // 0x18
		::System::UInt32 MazePoolType; // 0x1C
		::System::UInt32 PlaneID; // 0x20
		::System::UInt32 SubType; // 0x24
		::System::UInt32 StartFloorID; // 0x28
		::System::UInt32 WorldID; // 0x2C
		::RPG::Client::TextID PlaneName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePlaneRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePlaneRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
