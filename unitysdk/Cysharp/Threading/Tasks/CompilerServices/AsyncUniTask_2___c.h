#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T1, typename T2> class AsyncUniTask_2___c; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask_2___c_TypeDefinitionIndex = 28844;

	template <typename TStateMachine, typename T>
	class AsyncUniTask_2___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine, T>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine, T>**)Il2CppClass::FromTypeDefinitionIndex(AsyncUniTask_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
