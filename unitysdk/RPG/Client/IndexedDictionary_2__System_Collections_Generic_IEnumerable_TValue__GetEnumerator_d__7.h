#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class IndexedDictionary_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int IndexedDictionary_2__System_Collections_Generic_IEnumerable_TValue__GetEnumerator_d__7_TypeDefinitionIndex = 33812;

	template <typename TKey, typename TValue>
	class IndexedDictionary_2__System_Collections_Generic_IEnumerable_TValue__GetEnumerator_d__7 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TValue __2__current; // 0x0
		::RPG::Client::IndexedDictionary_2<TKey, TValue>* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
