#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__PLAYANIMATION_D__166_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82E350)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__PLAYANIMATION_D__166_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__PlayAnimation_d__166_TypeDefinitionIndex = 86483;

	struct alignas(8) UIGeneralNewsBubbleRowWidgetController__PlayAnimation_d__166
	{
		::UnityEngine::Animation* animation; // 0x10
		::System::Threading::CancellationToken token; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::String* animName; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__PLAYANIMATION_D__166_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__PLAYANIMATION_D__166_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
