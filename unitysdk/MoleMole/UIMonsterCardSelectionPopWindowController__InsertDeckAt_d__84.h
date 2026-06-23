#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMonsterCardSelectionPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER__INSERTDECKAT_D__84_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x826EA0)
#define MOLEMOLE_UIMONSTERCARDSELECTIONPOPWINDOWCONTROLLER__INSERTDECKAT_D__84_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardSelectionPopWindowController__InsertDeckAt_d__84_TypeDefinitionIndex = 50320;

	struct alignas(8) UIMonsterCardSelectionPopWindowController__InsertDeckAt_d__84
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::MoleMole::UIMonsterCardSelectionPopWindowController* __4__this; // 0x40
		::System::Int32 index; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Int32 _curIndex_5__2; // 0x50

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
