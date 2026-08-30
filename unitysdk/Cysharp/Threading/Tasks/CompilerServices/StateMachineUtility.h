#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1EA4F2E0)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int StateMachineUtility_TypeDefinitionIndex = 43123;

	class StateMachineUtility : public ::System::Object
	{
	public:
		static ::System::Int32 GetState(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Int32(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY_GETSTATE_OFFSET))(a1);
		}
	};
}
