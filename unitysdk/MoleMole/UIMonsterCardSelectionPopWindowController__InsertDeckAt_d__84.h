#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMonsterCardSelectionPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER__INSERTDECKAT_D__84_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A2C20)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER__INSERTDECKAT_D__84_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardSelectionPopWindowController__InsertDeckAt_d__84_TypeDefinitionIndex = 51989;

	struct alignas(8) UIMonsterCardSelectionPopWindowController__InsertDeckAt_d__84
	{
		::MoleMole::UIMonsterCardSelectionPopWindowController* __4__this; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::System::Int32 _curIndex_5__2; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Int32 index; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER__INSERTDECKAT_D__84_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER__INSERTDECKAT_D__84_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
