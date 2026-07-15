#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Object; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_Enumerator_TypeDefinitionIndex = 5085;

	template <typename TKey, typename TValue>
	struct PooledDictionary_2_Enumerator
	{
		::Collections::Pooled::PooledDictionary_2<TKey, TValue>* _dictionary; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _current; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
		// static const ::System::Int32 DictEntry = 0x1; // 0x0
		// static const ::System::Int32 KeyValuePair = 0x2; // 0x0
	};
}
