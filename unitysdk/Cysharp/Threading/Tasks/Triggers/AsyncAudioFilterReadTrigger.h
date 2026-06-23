#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAudioFilterReadHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E771550)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E771480)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E771720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET UNITYSDK_OFFSET(0x1E7715B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET UNITYSDK_OFFSET(0x1E771400)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E771840)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAudioFilterReadTrigger_TypeDefinitionIndex = 31337;

	class AsyncAudioFilterReadTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnAudioFilterRead(::Il2CppArray<::System::Single>* data, ::System::Int32 channels)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET))(this, data, channels);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>> OnAudioFilterReadAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>> OnAudioFilterReadAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
