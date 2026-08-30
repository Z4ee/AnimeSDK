#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE1E080)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE26330)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE26340)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE26460)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE26440)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE263F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE26320)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_JobHandlePromise_TypeDefinitionIndex = 42870;

	class UnityAsyncExtensions_JobHandlePromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x10
		::Unity::Jobs::JobHandle jobHandle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE__CTOR_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Create(::Unity::Jobs::JobHandle a1, ::System::Int16& a2)
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*(*)(::Unity::Jobs::JobHandle, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_CREATE_OFFSET))(a1, a2);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_JOBHANDLEPROMISE_MOVENEXT_OFFSET))(this);
		}
	};
}
