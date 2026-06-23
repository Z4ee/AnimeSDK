#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_D0F43E2E93E0D88C_Class_2_789DB209FB3DF9F3_1;
namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82D5B0)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__HideAssessDialog_d__3_TypeDefinitionIndex = 73029;

	struct alignas(8) UICinemaDatePlayWidgetController__HideAssessDialog_d__3
	{
		::Class_2_0D31A1661D004892<::Class_2_D0F43E2E93E0D88C_Class_2_789DB209FB3DF9F3_1*>* _assess_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__HIDEASSESSDIALOG_D__3_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
