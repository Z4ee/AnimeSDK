#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/RPG/GameCore/InventoryType.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_INVENTORYTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A230E0)
#define RPG_GAMECORE_INVENTORYTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A23A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryTabRow_TypeDefinitionIndex = 13106;

	class InventoryTabRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemSubType>* DisplayItemSubType; // 0x18
		::System::String* IconImagePath; // 0x20
		::Il2CppArray<::RPG::GameCore::InventorySortType>* ItemSortTypeList; // 0x28
		::System::Boolean NotDisplayPileLimit; // 0x30
		::RPG::GameCore::ItemSellType SellType; // 0x34
		::RPG::Client::TextID TabName; // 0x38
		::RPG::GameCore::InventoryType DisplayInventoryType; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 InventoryDisplayTag; // 0x50
		::System::UInt32 DisplayCapacityLimit; // 0x54
		::System::UInt32 TabSortWeight; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InventoryTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InventoryTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
