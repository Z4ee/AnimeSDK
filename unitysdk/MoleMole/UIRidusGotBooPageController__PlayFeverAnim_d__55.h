#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYFEVERANIM_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x761280)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYFEVERANIM_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__PlayFeverAnim_d__55_TypeDefinitionIndex = 40706;

	struct alignas(8) UIRidusGotBooPageController__PlayFeverAnim_d__55
	{
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Threading::CancellationToken token; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _animsList_5__2; // 0x38
		::System::Int32 _i_5__3; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYFEVERANIM_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PLAYFEVERANIM_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
