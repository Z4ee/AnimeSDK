#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int MinimumQueue_1_TypeDefinitionIndex = 32095;

	template <typename T>
	class MinimumQueue_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 tail; // 0x0
		::System::Int32 size; // 0x0
	};
}
