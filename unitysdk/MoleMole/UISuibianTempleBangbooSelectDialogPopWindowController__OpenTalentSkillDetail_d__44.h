#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleBangbooSelectDialogPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER__OPENTALENTSKILLDETAIL_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79C890)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER__OPENTALENTSKILLDETAIL_D__44_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBangbooSelectDialogPopWindowController__OpenTalentSkillDetail_d__44_TypeDefinitionIndex = 76453;

	struct alignas(8) UISuibianTempleBangbooSelectDialogPopWindowController__OpenTalentSkillDetail_d__44
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UISuibianTempleBangbooSelectDialogPopWindowController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x20
		::System::Boolean force; // 0x30
		::System::Int32 index; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER__OPENTALENTSKILLDETAIL_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER__OPENTALENTSKILLDETAIL_D__44_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
