#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooResultPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x844100)
#define MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooResultPageController__OnClickReturnSelectLevel_d__23_TypeDefinitionIndex = 46216;

	struct alignas(8) UIRidusGotBooResultPageController__OnClickReturnSelectLevel_d__23
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIRidusGotBooResultPageController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOORESULTPAGECONTROLLER__ONCLICKRETURNSELECTLEVEL_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
