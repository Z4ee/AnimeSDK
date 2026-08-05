#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB11C70)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB11B10)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB11B20)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FB11BE0)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB11C00)
#define CYSHARP_THREADING_TASKS_MOVENEXTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB11C80)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int MoveNextSource_TypeDefinitionIndex = 31811;

	class MoveNextSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> completionSource; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE__CTOR_OFFSET))(this);
		}

		::System::Boolean GetResult(::System::Int16 token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_MOVENEXTSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, token);
		}
	};
}
