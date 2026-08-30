#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::UI { class Text; }

#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS__BINDTOCORE_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BAA3D0)
#define CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS__BINDTOCORE_D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityBindingExtensions__BindToCore_d__2_TypeDefinitionIndex = 42904;

	struct alignas(8) UnityBindingExtensions__BindToCore_d__2
	{
		::System::Object* __7__wrap3; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x30
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::String*>* source; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
		::UnityEngine::UI::Text* text; // 0x50
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::String*>* _e_5__3; // 0x58
		::System::Int32 __7__wrap4; // 0x60
		::System::Int32 __1__state; // 0x64
		::System::Boolean _repeat_5__2; // 0x68
		::System::Boolean rebindOnError; // 0x69

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS__BINDTOCORE_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYBINDINGEXTENSIONS__BINDTOCORE_D__2_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
