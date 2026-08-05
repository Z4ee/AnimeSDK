#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections::Internal { template <typename T1, typename T2> class FreezedSortableView_2; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedSortableView_2__GetEnumerator_d__18_TypeDefinitionIndex = 28867;

	template <typename T, typename TView>
	class FreezedSortableView_2__GetEnumerator_d__18 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<T, TView> __2__current; // 0x0
		::ObservableCollections::Internal::FreezedSortableView_2<T, TView>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::Il2CppArray<::System::ValueTuple_2<T, TView>>* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
	};
}
