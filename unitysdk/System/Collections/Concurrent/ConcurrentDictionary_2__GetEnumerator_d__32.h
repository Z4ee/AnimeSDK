#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2_Node; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentDictionary_2__GetEnumerator_d__32_TypeDefinitionIndex = 1511;

	template <typename TKey, typename TValue>
	class ConcurrentDictionary_2__GetEnumerator_d__32 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Collections::Generic::KeyValuePair_2<TKey, TValue> __2__current; // 0x0
		::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* __4__this; // 0x0
		::Il2CppArray<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>* _buckets_5__1; // 0x0
		::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* _current_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
	};
}
