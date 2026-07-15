#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledDictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_ValueCollection_TypeDefinitionIndex = 5088;

	template <typename TKey, typename TValue>
	class PooledDictionary_2_ValueCollection : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledDictionary_2<TKey, TValue>* _dictionary; // 0x0
	};
}
