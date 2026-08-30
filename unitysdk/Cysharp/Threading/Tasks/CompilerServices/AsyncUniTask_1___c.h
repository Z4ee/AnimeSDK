#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class AsyncUniTask_1___c; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask_1___c_TypeDefinitionIndex = 43128;

	template <typename TStateMachine>
	class AsyncUniTask_1___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>**)Il2CppClass::FromTypeDefinitionIndex(AsyncUniTask_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
