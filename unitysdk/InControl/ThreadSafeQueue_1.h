#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace InControl
{
	inline static constexpr unsigned int ThreadSafeQueue_1_TypeDefinitionIndex = 38760;

	template <typename T>
	class ThreadSafeQueue_1 : public ::System::Object
	{
	public:
		::System::Object* sync; // 0x0
		::System::Collections::Generic::Queue_1<T>* data; // 0x0
	};
}
