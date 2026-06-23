#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA7B6A0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskSynchronizationContext_Callback_TypeDefinitionIndex = 31305;

	struct alignas(8) UniTaskSynchronizationContext_Callback
	{
		::System::Threading::SendOrPostCallback* callback; // 0x10
		::System::Object* state; // 0x18

		::System::Void _ctor(::System::Threading::SendOrPostCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK__CTOR_OFFSET))(this, callback, state);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK_INVOKE_OFFSET))(this);
		}
	};
}
