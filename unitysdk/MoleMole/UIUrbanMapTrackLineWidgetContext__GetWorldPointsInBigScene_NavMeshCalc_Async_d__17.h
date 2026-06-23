#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FFC30)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext__GetWorldPointsInBigScene_NavMeshCalc_Async_d__17_TypeDefinitionIndex = 76731;

	struct alignas(8) UIUrbanMapTrackLineWidgetContext__GetWorldPointsInBigScene_NavMeshCalc_Async_d__17
	{
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _pointList_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x18
		::MoleMole::UIUrbanMapTrackLineWidgetContext* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _navMeshPaths_5__4; // 0x50
		::UnityEngine::Vector3 playerPosVal; // 0x58
		::System::Int32 __1__state; // 0x64
		::UnityEngine::Vector3 _firstPoint_5__3; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__17_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
