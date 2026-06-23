#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Timeline { class MaterialBaseBehavior; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA3F040)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseBehavior__RefreshMonoRenderEntity_d__21_TypeDefinitionIndex = 32168;

	struct alignas(8) MaterialBaseBehavior__RefreshMonoRenderEntity_d__21
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::Timeline::MaterialBaseBehavior* __4__this; // 0x30
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
