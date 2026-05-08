#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2582D22C0BC976C3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A46A0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallSubsystem__UpdateMovingWallContext_d__18_TypeDefinitionIndex = 41854;

	struct alignas(8) MovingWallSubsystem__UpdateMovingWallContext_d__18
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Class_1_2582D22C0BC976C3* ctx; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x28
		::System::UInt32 entityID; // 0x38
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__UPDATEMOVINGWALLCONTEXT_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
