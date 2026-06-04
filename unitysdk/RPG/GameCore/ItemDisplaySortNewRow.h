#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1985DCF0)
#define RPG_GAMECORE_ITEMDISPLAYSORTNEWROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1985DEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemDisplaySortNewRow_TypeDefinitionIndex = 13242;

	class ItemDisplaySortNewRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ItemDisplaySortType Type; // 0x14
		::System::UInt32 Rank; // 0x18
		::System::UInt32 Param; // 0x1C
		::System::Int32 SortID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMDISPLAYSORTNEWROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemDisplaySortNewRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemDisplaySortNewRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
