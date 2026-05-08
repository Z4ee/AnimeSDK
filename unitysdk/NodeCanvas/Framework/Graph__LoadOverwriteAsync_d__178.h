#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/GraphLoadData.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NodeCanvas::Framework { class Graph; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NODECANVAS_FRAMEWORK_GRAPH__LOADOVERWRITEASYNC_D__178_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x949290)
#define NODECANVAS_FRAMEWORK_GRAPH__LOADOVERWRITEASYNC_D__178_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph__LoadOverwriteAsync_d__178_TypeDefinitionIndex = 27747;

	struct alignas(8) Graph__LoadOverwriteAsync_d__178
	{
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::NodeCanvas::Framework::Graph* __4__this; // 0x38
		::System::Action* callback; // 0x40
		::NodeCanvas::Framework::Internal::GraphLoadData data; // 0x48
		::System::Int32 __1__state; // 0x78

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH__LOADOVERWRITEASYNC_D__178_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH__LOADOVERWRITEASYNC_D__178_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
