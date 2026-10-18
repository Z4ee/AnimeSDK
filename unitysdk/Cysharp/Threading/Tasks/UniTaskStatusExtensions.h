#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x1F128380)
#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETEDSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x1F128370)
#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F128360)
#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISFAULTED_OFFSET UNITYSDK_OFFSET(0x1F128390)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskStatusExtensions_TypeDefinitionIndex = 38172;

	class UniTaskStatusExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsCompleted(::Cysharp::Threading::Tasks::UniTaskStatus a1)
		{
			return ((::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETED_OFFSET))(a1);
		}

		static ::System::Boolean IsCompletedSuccessfully(::Cysharp::Threading::Tasks::UniTaskStatus a1)
		{
			return ((::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETEDSUCCESSFULLY_OFFSET))(a1);
		}

		static ::System::Boolean IsCanceled(::Cysharp::Threading::Tasks::UniTaskStatus a1)
		{
			return ((::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCANCELED_OFFSET))(a1);
		}

		static ::System::Boolean IsFaulted(::Cysharp::Threading::Tasks::UniTaskStatus a1)
		{
			return ((::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISFAULTED_OFFSET))(a1);
		}
	};
}
