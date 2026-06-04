#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Sample
{
	inline static constexpr unsigned int RingBuffer_1_TypeDefinitionIndex = 69114;

	template <typename T>
	class RingBuffer_1 : public ::System::Object
	{
	public:
		::System::Int32 capacity; // 0x0
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 _Head_k__BackingField; // 0x0
		::System::Int32 _Tail_k__BackingField; // 0x0
	};
}
