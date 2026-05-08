#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C382E60)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C382CD0)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C382E70)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C383030)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C382F50)
#define CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C382CC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_IsCanceledSource_TypeDefinitionIndex = 28609;

	class UniTask_IsCanceledSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE__CTOR_OFFSET))(this, source);
		}

		::System::Boolean GetResult(::System::Int16 token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ISCANCELEDSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}
	};
}
