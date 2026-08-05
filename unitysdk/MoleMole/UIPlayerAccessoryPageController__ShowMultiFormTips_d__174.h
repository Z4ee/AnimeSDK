#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWMULTIFORMTIPS_D__174_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E5E0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWMULTIFORMTIPS_D__174_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__ShowMultiFormTips_d__174_TypeDefinitionIndex = 51563;

	struct alignas(8) UIPlayerAccessoryPageController__ShowMultiFormTips_d__174
	{
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWMULTIFORMTIPS_D__174_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWMULTIFORMTIPS_D__174_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
