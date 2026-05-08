#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class ObservableRingBuffer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableRingBuffer_1__GetEnumerator_d__36_TypeDefinitionIndex = 25656;

	template <typename T>
	class ObservableRingBuffer_1__GetEnumerator_d__36 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::ObservableCollections::ObservableRingBuffer_1<T>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap3; // 0x0
	};
}
