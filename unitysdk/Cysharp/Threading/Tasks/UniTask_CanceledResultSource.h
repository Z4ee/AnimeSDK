#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA7F830)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA7F890)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA7F8B0)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA7F8A0)
#define CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7ACC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_CanceledResultSource_TypeDefinitionIndex = 42660;

	class UniTask_CanceledResultSource : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10

		::System::Void _ctor(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CANCELEDRESULTSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}
	};
}
