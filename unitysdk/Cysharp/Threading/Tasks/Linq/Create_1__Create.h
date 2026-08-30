#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class Create_1_AsyncWriter; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class IAsyncWriter_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Create_1__Create_TypeDefinitionIndex = 44191;

	template <typename T>
	class Create_1__Create : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* create; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Int32 state; // 0x0
		::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>* writer; // 0x0
		T _Current_k__BackingField; // 0x0
	};
}
