#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONMAPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B044330)
#define RPG_GAMECORE_TREASUREDUNGEONMAPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B044470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonMapConfigRow_TypeDefinitionIndex = 12051;

	class TreasureDungeonMapConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MapInfo; // 0x10
		::System::UInt32 MapID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONMAPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonMapConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonMapConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONMAPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
