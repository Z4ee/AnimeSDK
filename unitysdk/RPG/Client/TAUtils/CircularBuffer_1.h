#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int CircularBuffer_1_TypeDefinitionIndex = 73531;

	template <typename T>
	class CircularBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _Buffer; // 0x0
		::System::Int32 _StartIndex; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Int32 _Capacity; // 0x0
	};
}
