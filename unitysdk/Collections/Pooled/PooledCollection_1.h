#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledCollection_1_TypeDefinitionIndex = 5080;

	template <typename T>
	class PooledCollection_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* _items; // 0x0
	};
}
