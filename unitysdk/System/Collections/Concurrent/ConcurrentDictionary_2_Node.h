#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2_Node; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentDictionary_2_Node_TypeDefinitionIndex = 1509;

	template <typename TKey, typename TValue>
	class ConcurrentDictionary_2_Node : public ::System::Object
	{
	public:
		TKey _key; // 0x0
		TValue _value; // 0x0
		::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* _next; // 0x0
		::System::Int32 _hashcode; // 0x0
	};
}
