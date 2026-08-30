#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONENEMYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EBF60)
#define RPG_GAMECORE_TREASUREDUNGEONENEMYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EC120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonEnemyConfigRow_TypeDefinitionIndex = 12446;

	class TreasureDungeonEnemyConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StageEventList; // 0x10
		::System::UInt32 SpecialMonsterID; // 0x18
		::System::UInt32 EnemyLevel; // 0x1C
		::System::UInt32 EnemyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONENEMYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonEnemyConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONENEMYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
