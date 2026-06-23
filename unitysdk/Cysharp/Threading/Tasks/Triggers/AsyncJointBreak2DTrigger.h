#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnJointBreak2DHandler; }
namespace UnityEngine { class Joint2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E8834A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E8833C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E883680)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET UNITYSDK_OFFSET(0x1E883500)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2D_OFFSET UNITYSDK_OFFSET(0x1E883350)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8837A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncJointBreak2DTrigger_TypeDefinitionIndex = 31373;

	class AsyncJointBreak2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::Joint2D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnJointBreak2D(::UnityEngine::Joint2D* brokenJoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Joint2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2D_OFFSET))(this, brokenJoint);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*> OnJointBreak2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*> OnJointBreak2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
