#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T1, typename T2, typename T3> class StateTuple_3; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StatePool_3_TypeDefinitionIndex = 31486;

	template <typename T1, typename T2, typename T3>
	class StatePool_3 : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1, T2, T3>*>** StaticGet_queue()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1, T2, T3>*>**)Il2CppClass::FromTypeDefinitionIndex(StatePool_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
