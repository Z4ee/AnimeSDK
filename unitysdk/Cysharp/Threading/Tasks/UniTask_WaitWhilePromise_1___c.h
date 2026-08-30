#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTask_WaitWhilePromise_1___c; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitWhilePromise_1___c_TypeDefinitionIndex = 42674;

	template <typename T>
	class UniTask_WaitWhilePromise_1___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise_1___c<T>** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitWhilePromise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitWhilePromise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
