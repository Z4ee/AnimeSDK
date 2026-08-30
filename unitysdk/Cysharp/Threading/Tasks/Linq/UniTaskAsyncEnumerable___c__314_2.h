#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class UniTaskAsyncEnumerable___c__314_2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__314_2_TypeDefinitionIndex = 44061;

	template <typename TSource, typename TResult>
	class UniTaskAsyncEnumerable___c__314_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource, TResult>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource, TResult>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__314_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<TSource, TResult, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>** StaticGet___9__314_0()
		{
			return (::System::Func_3<TSource, TResult, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__314_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
