#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_08CADB6A2017E035;
namespace MoleMole::FlowCanvas::Nodes { class LDStarRandomPositionByAnchorTask; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__CORORANDOMPOSITION_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F9160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__CORORANDOMPOSITION_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionByAnchorTask__CoroRandomPosition_d__23_TypeDefinitionIndex = 40341;

	struct alignas(8) LDStarRandomPositionByAnchorTask__CoroRandomPosition_d__23
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Class_1_08CADB6A2017E035* _task_5__2; // 0x20
		::MoleMole::FlowCanvas::Nodes::LDStarRandomPositionByAnchorTask* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x30
		::System::Int32 _i_5__3; // 0x40
		::System::Int32 __1__state; // 0x44
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__CORORANDOMPOSITION_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__CORORANDOMPOSITION_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
