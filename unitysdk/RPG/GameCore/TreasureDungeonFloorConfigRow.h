#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178BAFD0)
#define RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178BB2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonFloorConfigRow_TypeDefinitionIndex = 11420;

	class TreasureDungeonFloorConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MapID; // 0x10
		::Il2CppArray<::System::UInt32>* DungeonBuffID; // 0x18
		::Il2CppArray<::System::UInt32>* HardLevelList; // 0x20
		::System::UInt32 HardLevelGroupID; // 0x28
		::System::UInt32 EliteGroup2; // 0x2C
		::System::UInt32 FloorID; // 0x30
		::System::UInt32 AddExploreValue; // 0x34
		::System::UInt32 DungeonID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonFloorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonFloorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
