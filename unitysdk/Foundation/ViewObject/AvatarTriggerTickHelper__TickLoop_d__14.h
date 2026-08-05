#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class AvatarTriggerTickHelper; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__TICKLOOP_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x634E00)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__TICKLOOP_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int AvatarTriggerTickHelper__TickLoop_d__14_TypeDefinitionIndex = 40827;

	struct alignas(8) AvatarTriggerTickHelper__TickLoop_d__14
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::Foundation::ViewObject::AvatarTriggerTickHelper* __4__this; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__TICKLOOP_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__TICKLOOP_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
