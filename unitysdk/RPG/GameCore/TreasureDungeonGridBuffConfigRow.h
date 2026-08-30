#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EC420)
#define RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EC6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridBuffConfigRow_TypeDefinitionIndex = 12444;

	class TreasureDungeonGridBuffConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::UInt32 ParamInt; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::GameCore::TreasureDungeonGridBuffType Type; // 0x30
		::System::UInt32 DisplayMazeBuffID; // 0x34
		::System::UInt32 GridBuffMaxLevel; // 0x38
		::System::UInt32 GridBuffID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TreasureDungeonGridBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEONGRIDBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
