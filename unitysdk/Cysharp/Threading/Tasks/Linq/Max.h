#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE51EB0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CE51F40)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CE51FD0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_4_OFFSET UNITYSDK_OFFSET(0x1CE52060)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_5_OFFSET UNITYSDK_OFFSET(0x1CE520F0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_6_OFFSET UNITYSDK_OFFSET(0x1CE52180)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_7_OFFSET UNITYSDK_OFFSET(0x1CE52230)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_8_OFFSET UNITYSDK_OFFSET(0x1CE522C0)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_9_OFFSET UNITYSDK_OFFSET(0x1CE52370)
#define CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_OFFSET UNITYSDK_OFFSET(0x1CE51E20)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Max_TypeDefinitionIndex = 44281;

	class Max : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> MaxAsync_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> MaxAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> MaxAsync_3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> MaxAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> MaxAsync_5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> MaxAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> MaxAsync_7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> MaxAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> MaxAsync_9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_MAX_MAXASYNC_9_OFFSET))(a1, a2);
		}
	};
}
