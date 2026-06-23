#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class ObservableFixedSizeRingBuffer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableFixedSizeRingBuffer_1__GetEnumerator_d__37_TypeDefinitionIndex = 28283;

	template <typename T>
	class ObservableFixedSizeRingBuffer_1__GetEnumerator_d__37 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::ObservableCollections::ObservableFixedSizeRingBuffer_1<T>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap3; // 0x0
	};
}
