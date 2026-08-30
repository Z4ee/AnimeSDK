#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1196;
namespace RPG::GameCore { class TreasureDungeonItemConfigRow; }

#define RPG_CLIENT_TREASUREDUNGEONITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2C52C0)
#define RPG_CLIENT_TREASUREDUNGEONITEM_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x1B2C5430)
#define RPG_CLIENT_TREASUREDUNGEONITEM_GET_KILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B2C5380)
#define RPG_CLIENT_TREASUREDUNGEONITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1B2C5310)
#define RPG_CLIENT_TREASUREDUNGEONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C54A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonItem_TypeDefinitionIndex = 68185;

	class TreasureDungeonItem : public ::System::Object
	{
	public:
		::RPG::GameCore::TreasureDungeonItemConfigRow* _ItemRow; // 0x10
		::System::UInt32 ItemCount; // 0x18
		::System::UInt32 ItemID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_1196* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_KillLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_GET_KILLLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonItemConfigRow* get_ItemRow()
		{
			return ((::RPG::GameCore::TreasureDungeonItemConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_GET_ITEMROW_OFFSET))(this);
		}
	};
}
