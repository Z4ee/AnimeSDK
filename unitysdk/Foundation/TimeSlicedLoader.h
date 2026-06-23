#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/LoaderType.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class TimeSlicedLoaderNode; }
namespace Foundation { template <typename T> class LoaderNodeBase_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }

#define FOUNDATION_TIMESLICEDLOADER_ADDLOADERTASK_OFFSET UNITYSDK_OFFSET(0x1CC95B10)
#define FOUNDATION_TIMESLICEDLOADER_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1CC958F0)
#define FOUNDATION_TIMESLICEDLOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x1CC958E0)
#define FOUNDATION_TIMESLICEDLOADER_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x1CC95920)
#define FOUNDATION_TIMESLICEDLOADER_GET_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC95900)
#define FOUNDATION_TIMESLICEDLOADER_GET_TIMESLICECOND_OFFSET UNITYSDK_OFFSET(0x1CC95940)
#define FOUNDATION_TIMESLICEDLOADER_ONTASKEND_OFFSET UNITYSDK_OFFSET(0x1CC95D80)
#define FOUNDATION_TIMESLICEDLOADER_ONTASKLOADED_OFFSET UNITYSDK_OFFSET(0x1CC95CA0)
#define FOUNDATION_TIMESLICEDLOADER_SET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x1CC95930)
#define FOUNDATION_TIMESLICEDLOADER_SET_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC95910)
#define FOUNDATION_TIMESLICEDLOADER_SET_TIMESLICECOND_OFFSET UNITYSDK_OFFSET(0x1CC95950)
#define FOUNDATION_TIMESLICEDLOADER_START_OFFSET UNITYSDK_OFFSET(0x1CC95E20)
#define FOUNDATION_TIMESLICEDLOADER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1CC95E60)
#define FOUNDATION_TIMESLICEDLOADER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC95F70)
#define FOUNDATION_TIMESLICEDLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC95960)

namespace Foundation
{
	inline static constexpr unsigned int TimeSlicedLoader_TypeDefinitionIndex = 7777;

	class TimeSlicedLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::Foundation::TimeSlicedLoaderNode*>* callbackTasks; // 0x10
		::System::Diagnostics::Stopwatch* stopwatch; // 0x18
		::System::Collections::Generic::List_1<::System::Exception*>* errorList; // 0x20
		::System::Collections::Generic::HashSet_1<::Foundation::TimeSlicedLoaderNode*>* pendingTasks; // 0x28
		::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>* _OnFinished_k__BackingField; // 0x30
		::System::Action_2<::System::Int32, ::System::Int32>* _OnProgress_k__BackingField; // 0x38
		::System::Int32 completeCount; // 0x40
		::System::Int32 totalCount; // 0x44
		::System::Int64 _TimeSliceCond_k__BackingField; // 0x48
		::System::Boolean isStop; // 0x50

		::System::Void _ctor(::System::Int64 milliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER__CTOR_OFFSET))(this, milliseconds);
		}

		::Foundation::LoaderType get_LoaderType()
		{
			return ((::Foundation::LoaderType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_GET_LOADERTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_GET_ISDONE_OFFSET))(this);
		}

		::System::Action_2<::System::Int32, ::System::Int32>* get_OnProgress()
		{
			return ((::System::Action_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_GET_ONPROGRESS_OFFSET))(this);
		}

		::System::Void set_OnProgress(::System::Action_2<::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_SET_ONPROGRESS_OFFSET))(this, value);
		}

		::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>* get_OnFinished()
		{
			return ((::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_GET_ONFINISHED_OFFSET))(this);
		}

		::System::Void set_OnFinished(::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_SET_ONFINISHED_OFFSET))(this, value);
		}

		::System::Int64 get_TimeSliceCond()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_GET_TIMESLICECOND_OFFSET))(this);
		}

		::System::Void set_TimeSliceCond(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_SET_TIMESLICECOND_OFFSET))(this, value);
		}

		::System::Void AddLoaderTask(::Foundation::AssetRequestHandle cond, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_ADDLOADERTASK_OFFSET))(this, cond, callback);
		}

		::System::Void OnTaskLoaded(::Foundation::LoaderNodeBase_1<::Foundation::AssetRequestHandle>* loaderNode)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::LoaderNodeBase_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_ONTASKLOADED_OFFSET))(this, loaderNode);
		}

		::System::Void OnTaskEnd(::Foundation::LoaderNodeBase_1<::Foundation::AssetRequestHandle>* loaderNode, ::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::LoaderNodeBase_1<::Foundation::AssetRequestHandle>*, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_ONTASKEND_OFFSET))(this, loaderNode, ex);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_START_OFFSET))(this);
		}

		::System::Void Terminate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_TERMINATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADER_UPDATE_OFFSET))(this);
		}
	};
}
