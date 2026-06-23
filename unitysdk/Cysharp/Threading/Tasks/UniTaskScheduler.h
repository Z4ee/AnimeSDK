#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E7678F0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E7679B0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E767EC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskScheduler_TypeDefinitionIndex = 31303;

	class UniTaskScheduler : public ::System::Object
	{
	public:
		static ::System::Threading::SendOrPostCallback** StaticGet_handleExceptionInvoke()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x25B50);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet_UnobservedTaskException()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x25B58);
		}
		static ::System::Boolean* StaticGet_DispatchUnityMainThread()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x7C00);
		}
		static ::System::Boolean* StaticGet_PropagateOperationCanceledException()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x7C01);
		}
		static ::UnityEngine::LogType* StaticGet_UnobservedExceptionWriteLogType()
		{
			return (::UnityEngine::LogType*)Il2CppClass::FromTypeDefinitionIndex(UniTaskScheduler_TypeDefinitionIndex)->GetStaticField(0x7C04);
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
