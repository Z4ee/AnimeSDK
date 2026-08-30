#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class UniTaskAsyncEnumerable___c__318_2; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__318_2_TypeDefinitionIndex = 44063;

	template <typename TSource, typename TResult>
	class UniTaskAsyncEnumerable___c__318_2 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__318_2<TSource, TResult>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__318_2<TSource, TResult>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__318_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_4<TSource, TResult, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>** StaticGet___9__318_0()
		{
			return (::System::Func_4<TSource, TResult, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<TResult>>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskAsyncEnumerable___c__318_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
