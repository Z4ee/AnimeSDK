#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIHouseRhythmPrepPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOUSERHYTHMPREPPAGECONTROLLER__TRIGGERNEWBIE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7ADE20)
#define MOLEMOLE_UIHOUSERHYTHMPREPPAGECONTROLLER__TRIGGERNEWBIE_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPrepPageController__TriggerNewbie_d__18_TypeDefinitionIndex = 72086;

	struct alignas(8) UIHouseRhythmPrepPageController__TriggerNewbie_d__18
	{
		::MoleMole::UIHouseRhythmPrepPageController* __4__this; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPREPPAGECONTROLLER__TRIGGERNEWBIE_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPREPPAGECONTROLLER__TRIGGERNEWBIE_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
