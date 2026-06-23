#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_AttachExternalCancellationSource_1_TypeDefinitionIndex = 31293;

	template <typename T>
	class UniTaskExtensions_AttachExternalCancellationSource_1 : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallbackDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions_AttachExternalCancellationSource_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration tokenRegistration; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
	};
}
