#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace MoleMole { class UIPlayerAccessoryPageController___c__DisplayClass157_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__157_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x837350)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__157_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__ShowEffect_d__157_TypeDefinitionIndex = 51569;

	struct alignas(8) UIPlayerAccessoryPageController__ShowEffect_d__157
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UIPlayerAccessoryPageController___c__DisplayClass157_0* __8__1; // 0x28
		::UnityEngine::GameObject* go; // 0x30
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 cfgID; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__157_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__157_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
