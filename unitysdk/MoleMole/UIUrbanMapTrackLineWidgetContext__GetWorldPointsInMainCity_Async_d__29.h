#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINMAINCITY_ASYNC_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E1210)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINMAINCITY_ASYNC_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext__GetWorldPointsInMainCity_Async_d__29_TypeDefinitionIndex = 76729;

	struct alignas(8) UIUrbanMapTrackLineWidgetContext__GetWorldPointsInMainCity_Async_d__29
	{
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x30
		::MoleMole::UIUrbanMapTrackLineWidgetContext* __4__this; // 0x40
		::UnityEngine::Vector3 _targetNavPos_5__2; // 0x48
		::System::Int32 __1__state; // 0x54
		::UnityEngine::Vector3 playerPosVal; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINMAINCITY_ASYNC_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINMAINCITY_ASYNC_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
