#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T> class StateTuple_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StatePool_1_TypeDefinitionIndex = 32102;

	template <typename T1>
	class StatePool_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>** StaticGet_queue()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple_1<T1>*>**)Il2CppClass::FromTypeDefinitionIndex(StatePool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
