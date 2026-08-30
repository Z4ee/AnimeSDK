#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAudioFilterReadHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA60620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA60540)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA60860)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET UNITYSDK_OFFSET(0x1EA60680)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET UNITYSDK_OFFSET(0x1EA604C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA609E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAudioFilterReadTrigger_TypeDefinitionIndex = 42934;

	class AsyncAudioFilterReadTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnAudioFilterRead(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>> OnAudioFilterReadAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>> OnAudioFilterReadAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_1_OFFSET))(this, a1);
		}
	};
}
