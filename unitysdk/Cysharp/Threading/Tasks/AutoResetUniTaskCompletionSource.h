#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATEFROMCANCELED_OFFSET UNITYSDK_OFFSET(0x1FBAF870)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FBAF7D0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FBAFA80)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FBAFBF0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FBAF550)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1FBAF9B0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FBAFD20)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FBAFB70)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x1FBAF9A0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x1FBAF9D0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FBAFCB0)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAF560)
#define CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAF7C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AutoResetUniTaskCompletionSource_TypeDefinitionIndex = 31904;

	class AutoResetUniTaskCompletionSource : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>*)Il2CppClass::FromTypeDefinitionIndex(AutoResetUniTaskCompletionSource_TypeDefinitionIndex)->GetStaticField(0x270A0);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x10
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* nextNode; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Create()
		{
			return ((::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATE_OFFSET))();
		}

		static ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* CreateFromCanceled(::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*(*)(::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_CREATEFROMCANCELED_OFFSET))(cancellationToken, token);
		}

		::Cysharp::Threading::Tasks::UniTask get_Task()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET))(this);
		}

		::System::Boolean TrySetResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET))(this);
		}

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET))(this, cancellationToken);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AUTORESETUNITASKCOMPLETIONSOURCE_TRYRETURN_OFFSET))(this);
		}
	};
}
