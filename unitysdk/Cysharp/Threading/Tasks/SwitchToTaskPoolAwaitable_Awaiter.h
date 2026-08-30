#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1D755330)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x10F00)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x182D0)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BDEF30)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BDEF40)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D755370)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToTaskPoolAwaitable_Awaiter_TypeDefinitionIndex = 42785;

	struct alignas(1) SwitchToTaskPoolAwaitable_Awaiter
	{
		static ::System::Action_1<::System::Object*>** StaticGet_switchToCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchToTaskPoolAwaitable_Awaiter_TypeDefinitionIndex)->GetStaticField(0x61CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}

		static ::System::Void Callback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_CALLBACK_OFFSET))(a1);
		}
	};
}
