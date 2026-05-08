#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x72FE40)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_D__33_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext__AsyncCalcPath_d__33_TypeDefinitionIndex = 63382;

	struct alignas(8) UIUrbanMapTrackLineWidgetContext__AsyncCalcPath_d__33
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result; // 0x38
		::Class_1_A00B784DE48ED0A8* _wrapper_5__2; // 0x40
		::MoleMole::UIUrbanMapTrackLineWidgetContext* __4__this; // 0x48
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__2; // 0x50
		::System::Int32 __1__state; // 0x60
		::UnityEngine::Vector3 targetPosition; // 0x64
		::UnityEngine::Vector3 sourcePosition; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_D__33_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_D__33_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
