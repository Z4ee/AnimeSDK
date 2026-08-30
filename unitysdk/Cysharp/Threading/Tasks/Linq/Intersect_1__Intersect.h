#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumeratorBase_2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Intersect_1__Intersect_TypeDefinitionIndex = 44261;

	template <typename TSource>
	class Intersect_1__Intersect : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource, TSource>
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_HashSetAsyncCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Intersect_1__Intersect_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* second; // 0x0
		::System::Collections::Generic::HashSet_1<TSource>* set; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::HashSet_1<TSource>*> awaiter; // 0x0
	};
}
