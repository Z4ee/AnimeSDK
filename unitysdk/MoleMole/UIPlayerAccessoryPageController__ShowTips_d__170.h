#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWTIPS_D__170_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x875DD0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWTIPS_D__170_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__ShowTips_d__170_TypeDefinitionIndex = 51555;

	struct alignas(8) UIPlayerAccessoryPageController__ShowTips_d__170
	{
		::System::String* tips; // 0x10
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x38
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWTIPS_D__170_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWTIPS_D__170_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
