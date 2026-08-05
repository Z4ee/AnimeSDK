#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T1, typename T2> class StateTuple_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StatePool_2_TypeDefinitionIndex = 32104;

	template <typename T1, typename T2>
	class StatePool_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1, T2>*>** StaticGet_queue()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_2<T1, T2>*>**)Il2CppClass::FromTypeDefinitionIndex(StatePool_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
