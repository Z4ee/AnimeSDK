#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections::Internal { template <typename T> class CloneCollection_1_EnumerableCollection; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollection_1_EnumerableCollection__GetEnumerator_d__11_TypeDefinitionIndex = 28022;

	template <typename T>
	class CloneCollection_1_EnumerableCollection__GetEnumerator_d__11 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::ObservableCollections::Internal::CloneCollection_1_EnumerableCollection<T>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
