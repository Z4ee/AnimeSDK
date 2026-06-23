#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class AreaCategoryInOutSubsystem; }
namespace MoleMole { class AreaCategoryInOutSubsystem___c__DisplayClass14_0; }
namespace MoleMole { class AreaCategoryInOutSubsystem___c__DisplayClass14_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CHECKLOOP_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0FE0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CHECKLOOP_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem__CheckLoop_d__14_TypeDefinitionIndex = 63606;

	struct alignas(8) AreaCategoryInOutSubsystem__CheckLoop_d__14
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::AreaCategoryInOutSubsystem* __4__this; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::MoleMole::AreaCategoryInOutSubsystem___c__DisplayClass14_0* __8__1; // 0x30
		::MoleMole::AreaCategoryInOutSubsystem___c__DisplayClass14_1* __8__2; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CHECKLOOP_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__CHECKLOOP_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
