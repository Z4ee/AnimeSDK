#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class SafeObject_1; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int SafeObjectHandle_1_TypeDefinitionIndex = 7967;

	template <typename T>
	struct SafeObjectHandle_1
	{
		::Foundation::SafeObject_1<T>* value; // 0x0
		::System::UInt32 version; // 0x0
	};
}
