#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADALLGROUP_D__113_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x716C30)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADALLGROUP_D__113_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager__DoReloadAllGroup_d__113_TypeDefinitionIndex = 66397;

	struct alignas(8) ViewObjectManager__DoReloadAllGroup_d__113
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Threading::CancellationToken token; // 0x40
		::UnityEngine::Vector3 targetRotation; // 0x48
		::System::Int32 __1__state; // 0x54
		::UnityEngine::Vector3 targetPosition; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADALLGROUP_D__113_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADALLGROUP_D__113_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
