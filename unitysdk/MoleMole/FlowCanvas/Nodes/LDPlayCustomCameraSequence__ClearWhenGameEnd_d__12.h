#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_392;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x88EE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayCustomCameraSequence__ClearWhenGameEnd_d__12_TypeDefinitionIndex = 76144;

	struct alignas(8) LDPlayCustomCameraSequence__ClearWhenGameEnd_d__12
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__1; // 0x20
		::System::WeakReference_1<::Class_0_16E4307DCC419505_392*>* performer; // 0x30
		::Cysharp::Threading::Tasks::UniTask finishEventTask; // 0x38
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
