#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SafeObjectHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class SafeObjectPoolProxy_1; }

namespace Foundation
{
	inline static constexpr unsigned int SafeObject_1_TypeDefinitionIndex = 7883;

	template <typename T>
	class SafeObject_1 : public ::System::Object
	{
	public:
		T data; // 0x0
		::Foundation::SafeObjectPoolProxy_1<T>* pool; // 0x0
		::System::UInt32 _Version_k__BackingField; // 0x0
	};
}
