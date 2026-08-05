#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPath_1__LoadAssetAsync_d__9_TypeDefinitionIndex = 63647;

	template <typename T>
	struct NPCSoftAssetPath_1__LoadAssetAsync_d__9
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T> __t__builder; // 0x0
		::NPCCrowd::NPCSoftAssetPath_1<T>* __4__this; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
	};
}
