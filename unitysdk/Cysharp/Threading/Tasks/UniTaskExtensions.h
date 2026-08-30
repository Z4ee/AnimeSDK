#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/System/ValueTuple_6.h"
#include "unitysdk/System/ValueTuple_7.h"
#include "unitysdk/System/ValueTuple_8.h"

namespace Cysharp::Threading::Tasks { class AsyncLazy; }
namespace Cysharp::Threading::Tasks { template <typename T> class AsyncLazy_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASTASK_OFFSET UNITYSDK_OFFSET(0x1EA89CD0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASUNITASK_OFFSET UNITYSDK_OFFSET(0x1EA89AE0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1EA89FF0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_1_OFFSET UNITYSDK_OFFSET(0x1EA8A6C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_OFFSET UNITYSDK_OFFSET(0x1EA8A650)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET UNITYSDK_OFFSET(0x1EA8A5F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_1_OFFSET UNITYSDK_OFFSET(0x1EA8A560)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET UNITYSDK_OFFSET(0x1EA8A0F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_10_OFFSET UNITYSDK_OFFSET(0x1EA87DE0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_11_OFFSET UNITYSDK_OFFSET(0x1EA88120)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_12_OFFSET UNITYSDK_OFFSET(0x1EA88500)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_13_OFFSET UNITYSDK_OFFSET(0x1EA88980)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_14_OFFSET UNITYSDK_OFFSET(0x1EA88ED0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_15_OFFSET UNITYSDK_OFFSET(0x1EA89510)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_1_OFFSET UNITYSDK_OFFSET(0x1EA86700)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_2_OFFSET UNITYSDK_OFFSET(0x1EA86770)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_3_OFFSET UNITYSDK_OFFSET(0x1EA868F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_4_OFFSET UNITYSDK_OFFSET(0x1EA86AB0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_5_OFFSET UNITYSDK_OFFSET(0x1EA86CD0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_6_OFFSET UNITYSDK_OFFSET(0x1EA86F70)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_7_OFFSET UNITYSDK_OFFSET(0x1EA872A0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_8_OFFSET UNITYSDK_OFFSET(0x1EA87670)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_9_OFFSET UNITYSDK_OFFSET(0x1EA87B00)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1EA865C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUTWITHOUTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA8A4B0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1EA8A410)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOASYNCLAZY_OFFSET UNITYSDK_OFFSET(0x1EA89F90)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EA78220)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_1_OFFSET UNITYSDK_OFFSET(0x1EA8A7B0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_2_OFFSET UNITYSDK_OFFSET(0x1EA8A810)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_3_OFFSET UNITYSDK_OFFSET(0x1EA8A870)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_4_OFFSET UNITYSDK_OFFSET(0x1EA8A8E0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_OFFSET UNITYSDK_OFFSET(0x1EA8A730)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_TypeDefinitionIndex = 42816;

	class UniTaskExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_1(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_2(::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_2_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_3(::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_3_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_4(::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_4_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_5(::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_5_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_6(::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_6_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_7(::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_7_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_8(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_8_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_9(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_9_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_10(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_10_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_11(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_11_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_12(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_12_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_13(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_13_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_14(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_14_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter_15(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTask, ::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_GETAWAITER_15_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask AsUniTask(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASUNITASK_OFFSET))(a1, a2);
		}

		static ::System::Threading::Tasks::Task* AsTask(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ASTASK_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::AsyncLazy* ToAsyncLazy(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::Cysharp::Threading::Tasks::AsyncLazy*(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOASYNCLAZY_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask AttachExternalCancellation(::Cysharp::Threading::Tasks::UniTask a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATION_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* ToCoroutine(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINE_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask Timeout(::Cysharp::Threading::Tasks::UniTask a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4, ::System::Threading::CancellationTokenSource* a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> TimeoutWithoutException(::Cysharp::Threading::Tasks::UniTask a1, ::System::TimeSpan a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4, ::System::Threading::CancellationTokenSource* a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::Cysharp::Threading::Tasks::UniTask, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TIMEOUTWITHOUTEXCEPTION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Forget(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_OFFSET))(a1);
		}

		static ::System::Void Forget_1(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGET_1_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid ForgetCoreWithCatch(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_FORGETCOREWITHCATCH_OFFSET))(a1, a2, a3);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask ContinueWith_1(::Cysharp::Threading::Tasks::UniTask a1, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_CONTINUEWITH_1_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_1(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_1_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_2(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_2_OFFSET))(a1, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_3(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*> a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_3_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask Unwrap_4(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*> a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_UNWRAP_4_OFFSET))(a1, a2);
		}
	};
}
