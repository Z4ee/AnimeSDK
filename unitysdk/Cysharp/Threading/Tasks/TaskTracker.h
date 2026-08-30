#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T1, typename T2> class WeakDictionary_2; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CYSHARP_THREADING_TASKS_TASKTRACKER_CHECKANDRESETDIRTY_OFFSET UNITYSDK_OFFSET(0x1EA5D9E0)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_FOREACHACTIVETASK_OFFSET UNITYSDK_OFFSET(0x1EA5DA40)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x1EA5D9D0)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_TRACKACTIVETASK_OFFSET UNITYSDK_OFFSET(0x1EA5D9C0)
#define CYSHARP_THREADING_TASKS_TASKTRACKER_TYPEBEAUTIFY_OFFSET UNITYSDK_OFFSET(0x1EA5DF20)
#define CYSHARP_THREADING_TASKS_TASKTRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5E530)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskTracker_TypeDefinitionIndex = 42588;

	class TaskTracker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::ValueTuple_4<::System::String*, ::System::Int32, ::System::DateTime, ::System::String*>>>** StaticGet_listPool()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::ValueTuple_4<::System::String*, ::System::Int32, ::System::DateTime, ::System::String*>>>**)Il2CppClass::FromTypeDefinitionIndex(TaskTracker_TypeDefinitionIndex)->GetStaticField(0x56920);
		}
		static ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::ValueTuple_4<::System::String*, ::System::Int32, ::System::DateTime, ::System::String*>>** StaticGet_tracking()
		{
			return (::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::ValueTuple_4<::System::String*, ::System::Int32, ::System::DateTime, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(TaskTracker_TypeDefinitionIndex)->GetStaticField(0x56928);
		}
		static ::System::Boolean* StaticGet_dirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TaskTracker_TypeDefinitionIndex)->GetStaticField(0x12270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER__CCTOR_OFFSET))();
		}

		static ::System::Void TrackActiveTask(::Cysharp::Threading::Tasks::IUniTaskSource* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_TRACKACTIVETASK_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveTracking(::Cysharp::Threading::Tasks::IUniTaskSource* a1)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::IUniTaskSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_REMOVETRACKING_OFFSET))(a1);
		}

		static ::System::Boolean CheckAndResetDirty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_CHECKANDRESETDIRTY_OFFSET))();
		}

		static ::System::Void ForEachActiveTask(::System::Action_5<::System::Int32, ::System::String*, ::Cysharp::Threading::Tasks::UniTaskStatus, ::System::DateTime, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_5<::System::Int32, ::System::String*, ::Cysharp::Threading::Tasks::UniTaskStatus, ::System::DateTime, ::System::String*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_FOREACHACTIVETASK_OFFSET))(a1);
		}

		static ::System::Void TypeBeautify(::System::Type* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TASKTRACKER_TYPEBEAUTIFY_OFFSET))(a1, a2);
		}
	};
}
