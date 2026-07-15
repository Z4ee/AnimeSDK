#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG
{
	inline static constexpr unsigned int RingBuffer_1_TypeDefinitionIndex = 6778;

	template <typename T>
	class RingBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* data; // 0x0
		::System::Int32 offset; // 0x0
		::System::Int32 count; // 0x0
		::System::Object* sync; // 0x0
	};
}
