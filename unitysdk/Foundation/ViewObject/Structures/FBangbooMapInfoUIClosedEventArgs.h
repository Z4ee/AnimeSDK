#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FBangbooMapInfoUIClosedEventArgs_TypeDefinitionIndex = 64298;

	struct alignas(4) FBangbooMapInfoUIClosedEventArgs
	{
		::System::Int32 ID; // 0x10
		::System::Boolean Ret; // 0x14
	};
}
