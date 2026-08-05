#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UITriDiceOracleDialogPopWindowController; }
namespace MoleMole { class UITriDiceOracleDialogPopWindowController___c__DisplayClass44_0; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8499F0)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleDialogPopWindowController__PlayEffect_d__44_TypeDefinitionIndex = 89299;

	struct alignas(8) UITriDiceOracleDialogPopWindowController__PlayEffect_d__44
	{
		::MoleMole::UITriDiceOracleDialogPopWindowController___c__DisplayClass44_0* __8__1; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::System::String* dummy; // 0x28
		::MoleMole::UITriDiceOracleDialogPopWindowController* __4__this; // 0x30
		::MoleMole::Battle::Entity* entity; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MoleMole::Battle::Entity*> __t__builder; // 0x40
		::System::String* name; // 0x58
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
