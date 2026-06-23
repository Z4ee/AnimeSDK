#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_22;
namespace MoleMole { class SeasonPreUnlockAfterLeavePopShow; }
namespace MoleMole { class SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__DOPREUNLOCKASYNC_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7917A0)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__DOPREUNLOCKASYNC_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int SeasonPreUnlockAfterLeavePopShow__DoPreUnlockAsync_d__6_TypeDefinitionIndex = 59675;

	struct alignas(8) SeasonPreUnlockAfterLeavePopShow__DoPreUnlockAsync_d__6
	{
		::MoleMole::SeasonPreUnlockAfterLeavePopShow* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::SeasonPreUnlockAfterLeavePopShow___c__DisplayClass6_0* __8__1; // 0x28
		::Class_2_208CC9941471731A_22* _template_5__2; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 _performID_5__3; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__DOPREUNLOCKASYNC_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__DOPREUNLOCKASYNC_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
