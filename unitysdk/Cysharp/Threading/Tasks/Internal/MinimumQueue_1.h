#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int MinimumQueue_1_TypeDefinitionIndex = 43075;

	template <typename T>
	class MinimumQueue_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 MinimumGrow = 0x4; // 0x0
		// static const ::System::Int32 GrowFactor = 0xC8; // 0x0
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 tail; // 0x0
		::System::Int32 size; // 0x0
	};
}
