#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INVENTORYSORTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BFE10)
#define RPG_GAMECORE_INVENTORYSORTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172C0430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventorySortRow_TypeDefinitionIndex = 12636;

	class InventorySortRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID SortTypeName; // 0x10
		::RPG::GameCore::InventorySortType SortType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InventorySortRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InventorySortRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYSORTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
