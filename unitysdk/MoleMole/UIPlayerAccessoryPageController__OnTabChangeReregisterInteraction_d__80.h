#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AB0EB502868A1F2C;
namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__ONTABCHANGEREREGISTERINTERACTION_D__80_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8111C0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__ONTABCHANGEREREGISTERINTERACTION_D__80_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__OnTabChangeReregisterInteraction_d__80_TypeDefinitionIndex = 44129;

	struct alignas(8) UIPlayerAccessoryPageController__OnTabChangeReregisterInteraction_d__80
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x18
		::Class_2_AB0EB502868A1F2C* overrideRotCfg; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__ONTABCHANGEREREGISTERINTERACTION_D__80_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__ONTABCHANGEREREGISTERINTERACTION_D__80_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
