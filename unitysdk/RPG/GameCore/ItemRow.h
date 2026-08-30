#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/RPG/GameCore/ItemUseMethod.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D1BAEE0)
#define RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1BB650)
#define RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D1C0B80)
#define RPG_GAMECORE_ITEMROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D1C0BE0)
#define RPG_GAMECORE_ITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C0C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRow_TypeDefinitionIndex = 13754;

	class ItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CustomDataList; // 0x10
		::System::String* ItemIconPath; // 0x18
		::System::String* ItemAvatarIconPath; // 0x20
		::System::String* ItemFigureIconPath; // 0x28
		::System::String* ItemCurrencyIconPath; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ReturnItemIDList; // 0x38
		::System::UInt32 PileLimit; // 0x40
		::RPG::GameCore::ItemSubType ItemSubType; // 0x44
		::RPG::Client::TextID ItemName; // 0x48
		::RPG::Client::TextID ItemBGDesc; // 0x58
		::RPG::GameCore::ItemUseMethod UseMethod; // 0x68
		::System::UInt32 ID; // 0x6C
		::RPG::Client::TextID ItemDesc; // 0x70
		::System::UInt32 PurposeType; // 0x80
		::System::UInt32 InventoryDisplayTag; // 0x84
		::RPG::GameCore::ItemSellType SellType; // 0x88
		::System::UInt32 ItemGroup; // 0x8C
		::RPG::GameCore::ItemMainType ItemMainType; // 0x90
		::RPG::GameCore::ItemRarity Rarity; // 0x94
		::System::Boolean IsShowRedDot; // 0x98
		::System::Boolean isVisible; // 0x99

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
