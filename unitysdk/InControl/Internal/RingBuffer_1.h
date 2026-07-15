#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl::Internal
{
	inline static constexpr unsigned int RingBuffer_1_TypeDefinitionIndex = 38767;

	template <typename T>
	class RingBuffer_1 : public ::System::Object
	{
	public:
		::System::Int32 size; // 0x0
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 tail; // 0x0
		::System::Object* sync; // 0x0
	};
}
