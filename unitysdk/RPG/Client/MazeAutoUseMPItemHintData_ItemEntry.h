#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_ITEMENTRY_GETITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x152190)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeAutoUseMPItemHintData_ItemEntry_TypeDefinitionIndex = 62228;

	struct alignas(4) MazeAutoUseMPItemHintData_ItemEntry
	{
		::System::UInt32 ConfigID; // 0x10
		::System::Int32 Count; // 0x14

		::System::String* GetItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_ITEMENTRY_GETITEMICONPATH_OFFSET))(this);
		}
	};
}
