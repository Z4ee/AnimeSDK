#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5440E0)
#define RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5443C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonFloorConfigRow_TypeDefinitionIndex = 12438;

	class TreasureDungeonFloorConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HardLevelList; // 0x10
		::Il2CppArray<::System::UInt32>* DungeonBuffID; // 0x18
		::Il2CppArray<::System::UInt32>* MapID; // 0x20
		::System::UInt32 AddExploreValue; // 0x28
		::System::UInt32 HardLevelGroupID; // 0x2C
		::System::UInt32 EliteGroup2; // 0x30
		::System::UInt32 DungeonID; // 0x34
		::System::UInt32 FloorID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonFloorConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonFloorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONFLOORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
