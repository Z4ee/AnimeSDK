#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryValueChangedUnityObject_2__EveryValueChanged_TypeDefinitionIndex = 44577;

	template <typename TTarget, typename TProperty>
	class EveryValueChangedUnityObject_2__EveryValueChanged : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		TTarget target; // 0x0
		::UnityEngine::Object* targetAsUnityObject; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TProperty>* equalityComparer; // 0x0
		::System::Func_2<TTarget, TProperty>* propertySelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean first; // 0x0
		TProperty currentValue; // 0x0
		::System::Boolean disposed; // 0x0
	};
}
