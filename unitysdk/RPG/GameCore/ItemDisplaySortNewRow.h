#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A2C0F0)
#define RPG_GAMECORE_ITEMDISPLAYSORTNEWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemDisplaySortNewRow_TypeDefinitionIndex = 13163;

	class ItemDisplaySortNewRow : public ::System::Object
	{
	public:
		::System::UInt32 Param; // 0x10
		::System::UInt32 Rank; // 0x14
		::System::Int32 SortID; // 0x18
		::RPG::GameCore::ItemDisplaySortType Type; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMDISPLAYSORTNEWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemDisplaySortNewRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemDisplaySortNewRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
