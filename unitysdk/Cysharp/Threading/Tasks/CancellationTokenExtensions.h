#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CancellationTokenAwaitable.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_ADDTO_OFFSET UNITYSDK_OFFSET(0x1D7461E0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1D746150)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_DISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D746270)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x1D7446F0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D7459B0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOCANCELLATIONTOKENCORE_OFFSET UNITYSDK_OFFSET(0x1D745DE0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOCANCELLATIONTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1D745E30)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOCANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x1D745CB0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x1D746030)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_WAITUNTILCANCELED_OFFSET UNITYSDK_OFFSET(0x1D7461D0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7463E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenExtensions_TypeDefinitionIndex = 42549;

	class CancellationTokenExtensions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationTokenCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenExtensions_TypeDefinitionIndex)->GetStaticField(0x61960);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_disposeCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenExtensions_TypeDefinitionIndex)->GetStaticField(0x61968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Threading::CancellationToken(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOCANCELLATIONTOKEN_OFFSET))(a1);
		}

		static ::System::Threading::CancellationToken ToCancellationToken_1(::Cysharp::Threading::Tasks::UniTask a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::CancellationToken(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOCANCELLATIONTOKEN_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid ToCancellationTokenCore(::Cysharp::Threading::Tasks::UniTask a1, ::System::Threading::CancellationTokenSource* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOCANCELLATIONTOKENCORE_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationTokenRegistration> ToUniTask(::System::Threading::CancellationToken a1)
		{
			return ((::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationTokenRegistration>(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_TOUNITASK_OFFSET))(a1);
		}

		static ::System::Void Callback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_CALLBACK_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::CancellationTokenAwaitable WaitUntilCanceled(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::CancellationTokenAwaitable(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_WAITUNTILCANCELED_OFFSET))(a1);
		}

		static ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken a1, ::System::Action* a2)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::System::Threading::CancellationToken, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_OFFSET))(a1, a2);
		}

		static ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext_1(::System::Threading::CancellationToken a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Threading::CancellationTokenRegistration AddTo(::System::IDisposable* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::System::IDisposable*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_ADDTO_OFFSET))(a1, a2);
		}

		static ::System::Void DisposeCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_DISPOSECALLBACK_OFFSET))(a1);
		}
	};
}
