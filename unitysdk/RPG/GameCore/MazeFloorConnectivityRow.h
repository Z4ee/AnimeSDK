#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ACFB90)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD01F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorConnectivityRow_TypeDefinitionIndex = 13307;

	class MazeFloorConnectivityRow : public ::System::Object
	{
	public:
		::System::UInt32 FromFloorID; // 0x10
		::System::UInt32 WayPointGroupID; // 0x14
		::System::UInt32 WayPointEntityID; // 0x18
		::System::UInt32 ToFloorID; // 0x1C
		::System::UInt32 LockAreaMapID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazeFloorConnectivityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeFloorConnectivityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
