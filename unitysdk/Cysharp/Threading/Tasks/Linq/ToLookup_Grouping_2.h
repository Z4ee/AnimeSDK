#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Grouping_2_TypeDefinitionIndex = 44553;

	template <typename TKey, typename TElement>
	class ToLookup_Grouping_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<TElement>* elements; // 0x0
		TKey _Key_k__BackingField; // 0x0
	};
}
