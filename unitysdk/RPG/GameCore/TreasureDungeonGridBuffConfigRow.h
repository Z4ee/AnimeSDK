#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178BB2D0)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178BB5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridBuffConfigRow_TypeDefinitionIndex = 11426;

	class TreasureDungeonGridBuffConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::UInt32 GridBuffMaxLevel; // 0x18
		::System::UInt32 GridBuffID; // 0x1C
		::System::UInt32 DisplayMazeBuffID; // 0x20
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 ParamInt; // 0x38
		::RPG::GameCore::TreasureDungeonGridBuffType Type; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
