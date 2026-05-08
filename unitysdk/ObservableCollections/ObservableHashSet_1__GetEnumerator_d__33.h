#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class ObservableHashSet_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableHashSet_1__GetEnumerator_d__33_TypeDefinitionIndex = 25620;

	template <typename T>
	class ObservableHashSet_1__GetEnumerator_d__33 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::ObservableCollections::ObservableHashSet_1<T>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Collections::Generic::HashSet_1_Enumerator<T> __7__wrap3; // 0x0
	};
}
