#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETEDSUCCESSFULLY_OFFSET UNITYSDK_OFFSET(0x1C326840)
#define CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C326830)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskStatusExtensions_TypeDefinitionIndex = 28536;

	class UniTaskStatusExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsCompleted(::Cysharp::Threading::Tasks::UniTaskStatus status)
		{
			return ((::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETED_OFFSET))(status);
		}

		static ::System::Boolean IsCompletedSuccessfully(::Cysharp::Threading::Tasks::UniTaskStatus status)
		{
			return ((::System::Boolean(*)(::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSTATUSEXTENSIONS_ISCOMPLETEDSUCCESSFULLY_OFFSET))(status);
		}
	};
}
