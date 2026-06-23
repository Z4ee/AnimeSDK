#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SectorBinData_Item_TypeDefinitionIndex = 60204;

	struct alignas(8) SectorBinData_Item
	{
		::System::Int32 offset; // 0x10
		::System::String* path; // 0x18
	};
}
