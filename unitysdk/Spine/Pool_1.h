#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Spine
{
	inline static constexpr unsigned int Pool_1_TypeDefinitionIndex = 37479;

	template <typename T>
	class Pool_1 : public ::System::Object
	{
	public:
		::System::Int32 max; // 0x0
		::System::Collections::Generic::Stack_1<T>* freeObjects; // 0x0
		::System::Int32 _Peak_k__BackingField; // 0x0
	};
}
