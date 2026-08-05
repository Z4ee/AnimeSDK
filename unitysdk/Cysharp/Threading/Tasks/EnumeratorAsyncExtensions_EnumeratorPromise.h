#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class WaitForSeconds; }

#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_CONSUMEENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FB3DE60)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB3DC90)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB3E240)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB3E4F0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FB3DB50)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FB3DEB0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FB3E5B0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FB3E3F0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB3E540)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_UNWRAPWAITASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1FB3E660)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_UNWRAPWAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x1FB3E610)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB3DB60)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3DC80)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int EnumeratorAsyncExtensions_EnumeratorPromise_TypeDefinitionIndex = 31801;

	class EnumeratorAsyncExtensions_EnumeratorPromise : public ::System::Object
	{
	public:
		static ::System::Reflection::FieldInfo** StaticGet_waitForSeconds_Seconds()
		{
			return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(EnumeratorAsyncExtensions_EnumeratorPromise_TypeDefinitionIndex)->GetStaticField(0x27290);
		}
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>*)Il2CppClass::FromTypeDefinitionIndex(EnumeratorAsyncExtensions_EnumeratorPromise_TypeDefinitionIndex)->GetStaticField(0x27298);
		}
		::System::Collections::IEnumerator* innerEnumerator; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x18
		::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise* nextNode; // 0x40
		::System::Threading::CancellationToken cancellationToken; // 0x48
		::System::Int32 initialFrame; // 0x50
		::System::Boolean loopRunning; // 0x54
		::System::Boolean calledGetResult; // 0x55

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Collections::IEnumerator* innerEnumerator, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Collections::IEnumerator*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_CREATE_OFFSET))(innerEnumerator, timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_TRYRETURN_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* ConsumeEnumerator(::System::Collections::IEnumerator* enumerator)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_CONSUMEENUMERATOR_OFFSET))(enumerator);
		}

		static ::System::Collections::IEnumerator* UnwrapWaitForSeconds(::UnityEngine::WaitForSeconds* waitForSeconds)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::WaitForSeconds*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_UNWRAPWAITFORSECONDS_OFFSET))(waitForSeconds);
		}

		static ::System::Collections::IEnumerator* UnwrapWaitAsyncOperation(::UnityEngine::AsyncOperation* asyncOperation)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS_ENUMERATORPROMISE_UNWRAPWAITASYNCOPERATION_OFFSET))(asyncOperation);
		}
	};
}
