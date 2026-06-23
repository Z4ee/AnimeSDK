#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_DAEEC266DE5E805C.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__SHOWFAVORTEXT_D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x827E20)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__SHOWFAVORTEXT_D__75_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__ShowFavorText_d__75_TypeDefinitionIndex = 73031;

	struct alignas(8) UICinemaDatePlayWidgetController__ShowFavorText_d__75
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x28
		::UnityEngine::RectTransform* _remarkRoot_5__2; // 0x30
		::Enum_3_DAEEC266DE5E805C remarkType; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__SHOWFAVORTEXT_D__75_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__SHOWFAVORTEXT_D__75_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
