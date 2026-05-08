#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C41FA30)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C41FAF0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C420000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskScheduler_TypeDefinitionIndex = 28647;

	class UniTaskScheduler : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet_UnobservedTaskException()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x21DC0);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet_handleExceptionInvoke()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x21DC8);
		}
		static ::UnityEngine::LogType* StaticGet_UnobservedExceptionWriteLogType()
		{
			return (::UnityEngine::LogType*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x4B40);
		}
		static ::System::Boolean* StaticGet_PropagateOperationCanceledException()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x4B44);
		}
		static ::System::Boolean* StaticGet_DispatchUnityMainThread()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x4B45);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER__CCTOR_OFFSET))();
		}

		static ::System::Void InvokeUnobservedTaskException(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET))(state);
		}

		static ::System::Void PublishUnobservedTaskException(::System::Exception* ex)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(ex);
		}
	};
}
