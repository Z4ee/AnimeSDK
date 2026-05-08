#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UICpInfoChildWindowController_UITagInfo_TypeDefinitionIndex = 85265;

	struct alignas(8) UICpInfoChildWindowController_UITagInfo
	{
		::System::Boolean active; // 0x10
		::System::Int32 key; // 0x14
		::System::Int32 curNum; // 0x18
		::System::Int32 maxNum; // 0x1C
		::System::String* name; // 0x20
		::System::String* icon; // 0x28
		::System::String* desc; // 0x30
	};
}
