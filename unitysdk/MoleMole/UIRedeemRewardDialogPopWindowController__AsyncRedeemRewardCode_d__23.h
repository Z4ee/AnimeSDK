#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRedeemRewardDialogPopWindowController; }
namespace System { class String; }
namespace System::IO { class StreamReader; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__ASYNCREDEEMREWARDCODE_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x785680)
#define MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__ASYNCREDEEMREWARDCODE_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x777AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRedeemRewardDialogPopWindowController__AsyncRedeemRewardCode_d__23_TypeDefinitionIndex = 41848;

	struct alignas(8) UIRedeemRewardDialogPopWindowController__AsyncRedeemRewardCode_d__23
	{
		::System::IO::StreamReader* _reader_5__3; // 0x10
		::MoleMole::UIRedeemRewardDialogPopWindowController* __4__this; // 0x18
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> __u__1; // 0x20
		::System::String* convertUrl; // 0x28
		::System::Net::WebResponse* _resp_5__2; // 0x30
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__ASYNCREDEEMREWARDCODE_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__ASYNCREDEEMREWARDCODE_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
