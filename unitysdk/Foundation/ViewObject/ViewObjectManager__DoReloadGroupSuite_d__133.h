#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3EC97B498E0B85D2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUPSUITE_D__133_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C1740)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUPSUITE_D__133_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager__DoReloadGroupSuite_d__133_TypeDefinitionIndex = 73618;

	struct alignas(8) ViewObjectManager__DoReloadGroupSuite_d__133
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__1; // 0x30
		::Class_3_3EC97B498E0B85D2* reason; // 0x40
		::System::Threading::CancellationToken token; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::UInt32 groupID; // 0x54
		::System::UInt32 suiteIndex; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUPSUITE_D__133_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__DORELOADGROUPSUITE_D__133_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
