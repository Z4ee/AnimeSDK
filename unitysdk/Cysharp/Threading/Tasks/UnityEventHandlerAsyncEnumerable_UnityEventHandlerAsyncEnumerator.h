#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1EA9BCF0)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EA9B800)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA9BAE0)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_MOVENEXTASYNC_OFFSET UNITYSDK_OFFSET(0x1EA9B810)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_ONCANCELED1_OFFSET UNITYSDK_OFFSET(0x1EA9BB90)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_ONCANCELED2_OFFSET UNITYSDK_OFFSET(0x1EA9BD60)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA9BEC0)
#define CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9B7F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator_TypeDefinitionIndex = 42899;

	class UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancel1()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator_TypeDefinitionIndex)->GetStaticField(0x5A6F0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_cancel2()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator_TypeDefinitionIndex)->GetStaticField(0x5A6F8);
		}
		::UnityEngine::Events::UnityAction* unityAction; // 0x30
		::System::Threading::CancellationToken cancellationToken2; // 0x38
		::System::Threading::CancellationToken cancellationToken1; // 0x40
		::System::Threading::CancellationTokenRegistration registration1; // 0x48
		::System::Threading::CancellationTokenRegistration registration2; // 0x60
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x78
		::System::Boolean isDisposed; // 0x80

		::System::Void _ctor(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR__CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::AsyncUnit get_Current()
		{
			return ((::Cysharp::Threading::Tasks::AsyncUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> MoveNextAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_MOVENEXTASYNC_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_INVOKE_OFFSET))(this);
		}

		static ::System::Void OnCanceled1(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_ONCANCELED1_OFFSET))(a1);
		}

		static ::System::Void OnCanceled2(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_ONCANCELED2_OFFSET))(a1);
		}

		::Cysharp::Threading::Tasks::UniTask DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYEVENTHANDLERASYNCENUMERABLE_UNITYEVENTHANDLERASYNCENUMERATOR_DISPOSEASYNC_OFFSET))(this);
		}
	};
}
