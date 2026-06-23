#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1E78B3C0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_DISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E78B5A0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E78B430)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78B6C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenExtensions_TypeDefinitionIndex = 31180;

	class CancellationTokenExtensions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationTokenCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenExtensions_TypeDefinitionIndex)->GetStaticField(0x25A90);
		}
		static ::System::Action_1<::System::Object*>** StaticGet_disposeCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenExtensions_TypeDefinitionIndex)->GetStaticField(0x25A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void Callback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_CALLBACK_OFFSET))(state);
		}

		static ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken cancellationToken, ::System::Action_1<::System::Object*>* callback, ::System::Object* state)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_OFFSET))(cancellationToken, callback, state);
		}

		static ::System::Void DisposeCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_DISPOSECALLBACK_OFFSET))(state);
		}
	};
}
