#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class RingBuffer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBuffer_1__GetEnumerator_d__23_TypeDefinitionIndex = 25764;

	template <typename T>
	class RingBuffer_1__GetEnumerator_d__23 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::ObservableCollections::RingBuffer_1<T>* __4__this; // 0x0
		::System::Int32 _end_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
	};
}
