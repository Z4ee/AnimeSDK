#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIDeckRowWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER__PLAYANIMATION_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82E340)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER__PLAYANIMATION_D__22_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIDeckRowWidgetController__PlayAnimation_d__22_TypeDefinitionIndex = 58417;

	struct alignas(8) UIDeckRowWidgetController__PlayAnimation_d__22
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Threading::CancellationToken cts; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::MoleMole::UIDeckRowWidgetController* __4__this; // 0x38
		::System::String* clipName; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER__PLAYANIMATION_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER__PLAYANIMATION_D__22_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
