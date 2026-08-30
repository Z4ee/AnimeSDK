#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_ADD_UNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA8E3E0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA8E5A0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA816D0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_REMOVE_UNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA8E4C0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8E670)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskScheduler_TypeDefinitionIndex = 42860;

	class UniTaskScheduler : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet_UnobservedTaskException()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x59ED0);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet_handleExceptionInvoke()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x59ED8);
		}
		static ::UnityEngine::LogType* StaticGet_UnobservedExceptionWriteLogType()
		{
			return (::UnityEngine::LogType*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x12AE0);
		}
		static ::System::Boolean* StaticGet_DispatchUnityMainThread()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x12AE4);
		}
		static ::System::Boolean* StaticGet_PropagateOperationCanceledException()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x12AE5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER__CCTOR_OFFSET))();
		}

		static ::System::Void add_UnobservedTaskException(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_ADD_UNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void remove_UnobservedTaskException(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_REMOVE_UNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void InvokeUnobservedTaskException(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void PublishUnobservedTaskException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}
	};
}
