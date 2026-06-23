#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/Utils/TypeErasedCompletionSourceImpl.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Exception; }

#define MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_GETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x156F2D20)
#define MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_GETTASK_OFFSET UNITYSDK_OFFSET(0x156F2C60)
#define MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x156F2BA0)
#define MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x156F2C00)
#define MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x156F2DE0)
#define MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x156F2E30)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetInternalUniTaskCompletionSource_TypeDefinitionIndex = 48821;

	class AutoResetInternalUniTaskCompletionSource : public ::System::Object
	{
	public:
		::MoleMole::Utils::TypeErasedCompletionSourceImpl _impl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE__CTOR_OFFSET))(this);
		}

		::System::Boolean MoleMole_Utils_ITypeErasedCompletionSource_TrySetCanceled(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET))(this, cancellationToken);
		}

		::System::Boolean MoleMole_Utils_ITypeErasedCompletionSource_TrySetException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_TRYSETEXCEPTION_OFFSET))(this, exception);
		}

		::Cysharp::Threading::Tasks::UniTask MoleMole_Utils_ITypeErasedCompletionSource_GetTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_GETTASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask MoleMole_Utils_ITypeErasedCompletionSource_GetNextTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_GETNEXTTASK_OFFSET))(this);
		}

		::System::Boolean MoleMole_Utils_ITypeErasedCompletionSource_TrySetResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETINTERNALUNITASKCOMPLETIONSOURCE_MOLEMOLE_UTILS_ITYPEERASEDCOMPLETIONSOURCE_TRYSETRESULT_OFFSET))(this);
		}
	};
}
