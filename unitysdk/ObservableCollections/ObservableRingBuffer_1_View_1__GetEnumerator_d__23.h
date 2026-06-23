#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { template <typename T1, typename T2> class ObservableRingBuffer_1_View_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableRingBuffer_1_View_1__GetEnumerator_d__23_TypeDefinitionIndex = 28145;

	template <typename T, typename TView>
	class ObservableRingBuffer_1_View_1__GetEnumerator_d__23 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<T, TView> __2__current; // 0x0
		::ObservableCollections::ObservableRingBuffer_1_View_1<T, TView>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T, TView>>* __7__wrap3; // 0x0
	};
}
