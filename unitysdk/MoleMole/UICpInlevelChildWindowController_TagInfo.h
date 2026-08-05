#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UICpInlevelChildWindowController_TagInfo_TypeDefinitionIndex = 94871;

	struct alignas(8) UICpInlevelChildWindowController_TagInfo
	{
		::System::Boolean active; // 0x10
		::System::Int32 key; // 0x14
		::System::Int32 curNum; // 0x18
		::System::Int32 maxNum; // 0x1C
		::System::String* icon; // 0x20
	};
}
