#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IConnectableUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskOrderedAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class IAsyncWriter_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16> class Func_16; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> class Func_15; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> class Func_14; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> class Func_13; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> class Func_12; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> class Func_11; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class Func_10; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Func_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IObservable_1; }
namespace System { template <typename T> class IObserver_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE646A0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CE64780)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CE64850)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_4_OFFSET UNITYSDK_OFFSET(0x1CE64920)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_5_OFFSET UNITYSDK_OFFSET(0x1CE64A00)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_6_OFFSET UNITYSDK_OFFSET(0x1CE64AE0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_7_OFFSET UNITYSDK_OFFSET(0x1CE64BC0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_8_OFFSET UNITYSDK_OFFSET(0x1CE64CA0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_9_OFFSET UNITYSDK_OFFSET(0x1CE64D90)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_OFFSET UNITYSDK_OFFSET(0x1CE645C0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_EVERYUPDATE_OFFSET UNITYSDK_OFFSET(0x1CE66A00)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVALFRAME_OFFSET UNITYSDK_OFFSET(0x1CE66D30)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1CE66B20)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE65830)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CE65910)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CE659E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_4_OFFSET UNITYSDK_OFFSET(0x1CE65AC0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_5_OFFSET UNITYSDK_OFFSET(0x1CE65BA0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_6_OFFSET UNITYSDK_OFFSET(0x1CE65C80)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_7_OFFSET UNITYSDK_OFFSET(0x1CE65D70)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_8_OFFSET UNITYSDK_OFFSET(0x1CE65E50)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_9_OFFSET UNITYSDK_OFFSET(0x1CE65F40)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_OFFSET UNITYSDK_OFFSET(0x1CE65750)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE64F50)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CE65030)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CE65100)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_4_OFFSET UNITYSDK_OFFSET(0x1CE651E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_5_OFFSET UNITYSDK_OFFSET(0x1CE652D0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_6_OFFSET UNITYSDK_OFFSET(0x1CE653A0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_7_OFFSET UNITYSDK_OFFSET(0x1CE65490)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_8_OFFSET UNITYSDK_OFFSET(0x1CE65570)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_9_OFFSET UNITYSDK_OFFSET(0x1CE65660)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_OFFSET UNITYSDK_OFFSET(0x1CE64E80)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_RANGE_OFFSET UNITYSDK_OFFSET(0x1CE66040)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CE66200)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CE662E0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CE663B0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_4_OFFSET UNITYSDK_OFFSET(0x1CE66490)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_5_OFFSET UNITYSDK_OFFSET(0x1CE66580)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_6_OFFSET UNITYSDK_OFFSET(0x1CE66660)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_7_OFFSET UNITYSDK_OFFSET(0x1CE66740)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_8_OFFSET UNITYSDK_OFFSET(0x1CE66820)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_9_OFFSET UNITYSDK_OFFSET(0x1CE66910)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_OFFSET UNITYSDK_OFFSET(0x1CE66130)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_1_OFFSET UNITYSDK_OFFSET(0x1CE66C30)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_OFFSET UNITYSDK_OFFSET(0x1CE66B90)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_1_OFFSET UNITYSDK_OFFSET(0x1CE66AA0)
#define CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_OFFSET UNITYSDK_OFFSET(0x1CE66A40)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable_TypeDefinitionIndex = 44045;

	class UniTaskAsyncEnumerable : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> AverageAsync_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> AverageAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> AverageAsync_3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> AverageAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> AverageAsync_5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> AverageAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> AverageAsync_7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> AverageAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> AverageAsync_9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_AVERAGEASYNC_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> MinAsync_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> MinAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> MinAsync_3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> MinAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> MinAsync_5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> MinAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> MinAsync_7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> MinAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> MinAsync_9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MINASYNC_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> MaxAsync_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> MaxAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> MaxAsync_3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> MaxAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> MaxAsync_5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> MaxAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> MaxAsync_7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> MaxAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> MaxAsync_9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_MAXASYNC_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* Range(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_RANGE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int32>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int64> SumAsync_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int64>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Int64>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Single> SumAsync_2(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Single>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Single>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Double> SumAsync_3(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Double>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Double>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_3_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAsync_4(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_4_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>> SumAsync_5(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int32>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int32>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_5_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>> SumAsync_6(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Int64>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Int64>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_6_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>> SumAsync_7(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Single>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Single>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_7_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>> SumAsync_8(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Double>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Double>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_8_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAsync_9(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>(*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_SUMASYNC_9_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* EveryUpdate(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_EVERYUPDATE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Timer(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Timer_1(::System::TimeSpan a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::TimeSpan, ::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMER_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Interval(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* TimerFrame(::System::Int32 a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* TimerFrame_1(::System::Int32 a1, ::System::Int32 a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::Int32, ::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_TIMERFRAME_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* IntervalFrame(::System::Int32 a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_UNITASKASYNCENUMERABLE_INTERVALFRAME_OFFSET))(a1, a2, a3);
		}
	};
}
