#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_KeyCollection_Enumerator_TypeDefinitionIndex = 5087;

	template <typename TKey, typename TValue>
	struct PooledDictionary_2_KeyCollection_Enumerator
	{
		::Collections::Pooled::PooledDictionary_2<TKey, TValue>* _dictionary; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		TKey _currentKey; // 0x0
	};
}
