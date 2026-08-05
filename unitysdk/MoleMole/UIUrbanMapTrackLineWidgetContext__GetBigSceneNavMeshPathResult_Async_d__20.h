#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/ObjectArrayPool_1_ObjectHandler_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETBIGSCENENAVMESHPATHRESULT_ASYNC_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x83B120)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETBIGSCENENAVMESHPATHRESULT_ASYNC_D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext__GetBigSceneNavMeshPathResult_Async_d__20_TypeDefinitionIndex = 54328;

	struct alignas(8) UIUrbanMapTrackLineWidgetContext__GetBigSceneNavMeshPathResult_Async_d__20
	{
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths; // 0x10
		::MoleMole::UIUrbanMapTrackLineWidgetContext* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x20
		::Foundation::ObjectArrayPool_1_ObjectHandler_1<::UnityEngine::Vector3, ::UnityEngine::Vector3> _tempCornersHandle_5__2; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x38
		::UnityEngine::Vector3 targetPos; // 0x50
		::System::Int32 __1__state; // 0x5C
		::UnityEngine::Vector3 playerPosVal; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETBIGSCENENAVMESHPATHRESULT_ASYNC_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETBIGSCENENAVMESHPATHRESULT_ASYNC_D__20_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
