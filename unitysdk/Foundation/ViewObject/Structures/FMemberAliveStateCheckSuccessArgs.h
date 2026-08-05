#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMemberAliveStateCheckSuccessArgs_TypeDefinitionIndex = 74781;

	struct alignas(8) FMemberAliveStateCheckSuccessArgs
	{
		::System::String* Name; // 0x10
	};
}
