#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class UniTaskAsyncEnumerable___c__136_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__136_2_TypeDefinitionIndex = 44050;

	template <typename TSource, typename TKey>
	class UniTaskAsyncEnumerable___c__136_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource, TKey>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource, TKey>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__136_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TSource>>** StaticGet___9__136_0()
		{
			return (::System::Func_2<TSource, ::Cysharp::Threading::Tasks::UniTask_1<TSource>>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__136_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
