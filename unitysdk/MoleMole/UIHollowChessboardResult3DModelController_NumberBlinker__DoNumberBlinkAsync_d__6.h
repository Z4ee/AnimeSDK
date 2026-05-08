#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIHollowChessboardResult3DModelController_NumberBlinker; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__DONUMBERBLINKASYNC_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x788300)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__DONUMBERBLINKASYNC_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboardResult3DModelController_NumberBlinker__DoNumberBlinkAsync_d__6_TypeDefinitionIndex = 39435;

	struct alignas(8) UIHollowChessboardResult3DModelController_NumberBlinker__DoNumberBlinkAsync_d__6
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::MoleMole::UIHollowChessboardResult3DModelController_NumberBlinker* __4__this; // 0x38
		::System::Int32 leftNumber; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Int32 rightNumber; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__DONUMBERBLINKASYNC_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__DONUMBERBLINKASYNC_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
