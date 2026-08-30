#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BB7EB0)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB7E90)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB7EC0)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_SOURCEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB8110)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB8100)
#define CYSHARP_THREADING_TASKS_UNITASK_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x148D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_Awaiter_TypeDefinitionIndex = 42750;

	struct alignas(8) UniTask_Awaiter
	{
		::Cysharp::Threading::Tasks::UniTask task; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::UniTask& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void SourceOnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_AWAITER_SOURCEONCOMPLETED_OFFSET))(this, a1, a2);
		}
	};
}
