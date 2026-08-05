#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd { template <typename T> class NPCSoftAssetPathList_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPathList_1__LoadAssetsAsync_d__11_TypeDefinitionIndex = 86502;

	template <typename T>
	struct NPCSoftAssetPathList_1__LoadAssetsAsync_d__11
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Il2CppArray<T>*> __t__builder; // 0x0
		::NPCCrowd::NPCSoftAssetPathList_1<T>* __4__this; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<T>*> __u__1; // 0x0
	};
}
