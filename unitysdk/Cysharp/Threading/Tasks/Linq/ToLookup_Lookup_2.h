#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class ToLookup_Grouping_2; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class ToLookup_Lookup_2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Lookup_2_TypeDefinitionIndex = 44548;

	template <typename TKey, typename TElement>
	class ToLookup_Lookup_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey, TElement>** StaticGet_empty()
		{
			return (::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey, TElement>**)Il2CppClass::FromTypeDefinitionIndex(ToLookup_Lookup_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<TKey, ::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey, TElement>*>* dict; // 0x0
	};
}
