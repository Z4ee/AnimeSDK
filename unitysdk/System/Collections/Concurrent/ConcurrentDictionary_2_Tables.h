#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2_Node; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentDictionary_2_Tables_TypeDefinitionIndex = 1508;

	template <typename TKey, typename TValue>
	class ConcurrentDictionary_2_Tables : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _locks; // 0x0
		::Il2CppArray<::System::Int32>* _countPerLock; // 0x0
	};
}
