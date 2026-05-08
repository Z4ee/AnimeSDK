#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunner; }
namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class AsyncUniTaskVoid_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskVoid_1_TypeDefinitionIndex = 28839;

	template <typename TStateMachine>
	class AsyncUniTaskVoid_1 : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>*)Il2CppClass::FromTypeDefinitionIndex(AsyncUniTaskVoid_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* _ReturnAction_k__BackingField; // 0x0
		TStateMachine stateMachine; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>* nextNode; // 0x0
	};
}
