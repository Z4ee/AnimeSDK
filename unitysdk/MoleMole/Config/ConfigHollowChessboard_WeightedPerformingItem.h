#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGITEM_GETPERFORMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x737F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_WeightedPerformingItem_TypeDefinitionIndex = 43459;

	struct alignas(8) ConfigHollowChessboard_WeightedPerformingItem
	{
		::System::String* performKey; // 0x10
		::System::Int32 performWeight; // 0x18

		::System::Collections::IEnumerable* GetPerformListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGITEM_GETPERFORMLISTVALUEDROPDOWN_OFFSET))(this);
		}
	};
}
