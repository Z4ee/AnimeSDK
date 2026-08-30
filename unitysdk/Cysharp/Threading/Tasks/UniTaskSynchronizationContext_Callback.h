#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x3BB81F0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4950)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskSynchronizationContext_Callback_TypeDefinitionIndex = 42862;

	struct alignas(8) UniTaskSynchronizationContext_Callback
	{
		::System::Object* state; // 0x10
		::System::Threading::SendOrPostCallback* callback; // 0x18

		::System::Void _ctor(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CALLBACK_INVOKE_OFFSET))(this);
		}
	};
}
