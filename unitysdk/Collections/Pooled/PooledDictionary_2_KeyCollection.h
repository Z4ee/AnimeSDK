#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledDictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_KeyCollection_TypeDefinitionIndex = 5086;

	template <typename TKey, typename TValue>
	class PooledDictionary_2_KeyCollection : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledDictionary_2<TKey, TValue>* _dictionary; // 0x0
	};
}
