#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LoaderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class IEnumeratorLoaderNode; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Coroutine; }

#define FOUNDATION_IENUMERATORLOADER_ADDLOADERNODE_OFFSET UNITYSDK_OFFSET(0x1D884240)
#define FOUNDATION_IENUMERATORLOADER_AUTOPREPAREENV_OFFSET UNITYSDK_OFFSET(0x1D883E90)
#define FOUNDATION_IENUMERATORLOADER_GET_ISADDDONE_OFFSET UNITYSDK_OFFSET(0x1D883BA0)
#define FOUNDATION_IENUMERATORLOADER_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1D883B40)
#define FOUNDATION_IENUMERATORLOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x1D883B30)
#define FOUNDATION_IENUMERATORLOADER_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x1D883BE0)
#define FOUNDATION_IENUMERATORLOADER_GET_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D883BC0)
#define FOUNDATION_IENUMERATORLOADER_GET_TIMESLICECONDINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1D883C00)
#define FOUNDATION_IENUMERATORLOADER_LOADLOOPER_OFFSET UNITYSDK_OFFSET(0x1D884760)
#define FOUNDATION_IENUMERATORLOADER_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1D884480)
#define FOUNDATION_IENUMERATORLOADER_LOAD_2_OFFSET UNITYSDK_OFFSET(0x1D8844F0)
#define FOUNDATION_IENUMERATORLOADER_LOAD_3_OFFSET UNITYSDK_OFFSET(0x1D8845A0)
#define FOUNDATION_IENUMERATORLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1D8841C0)
#define FOUNDATION_IENUMERATORLOADER_ONLOADERNODESTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D884650)
#define FOUNDATION_IENUMERATORLOADER_SET_ISADDDONE_OFFSET UNITYSDK_OFFSET(0x1D883BB0)
#define FOUNDATION_IENUMERATORLOADER_SET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x1D883BF0)
#define FOUNDATION_IENUMERATORLOADER_SET_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D883BD0)
#define FOUNDATION_IENUMERATORLOADER_SET_TIMESLICECONDINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1D883C10)
#define FOUNDATION_IENUMERATORLOADER_START_1_OFFSET UNITYSDK_OFFSET(0x1D883E40)
#define FOUNDATION_IENUMERATORLOADER_START_OFFSET UNITYSDK_OFFSET(0x1D883DC0)
#define FOUNDATION_IENUMERATORLOADER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1D883FE0)
#define FOUNDATION_IENUMERATORLOADER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D884180)
#define FOUNDATION_IENUMERATORLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D883C20)
#define FOUNDATION_IENUMERATORLOADER__LOAD_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D8847E0)
#define FOUNDATION_IENUMERATORLOADER__LOAD_B__35_0_OFFSET UNITYSDK_OFFSET(0x1D884810)

namespace Foundation
{
	inline static constexpr unsigned int IEnumeratorLoader_TypeDefinitionIndex = 8163;

	class IEnumeratorLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::IEnumeratorLoaderNode*>* executeNodes; // 0x10
		::System::Diagnostics::Stopwatch* stopWatch; // 0x18
		::System::Collections::Generic::HashSet_1<::Foundation::IEnumeratorLoaderNode*>* pendingNodes; // 0x20
		::System::Collections::Generic::List_1<::System::Exception*>* errorList; // 0x28
		::System::Action_2<::System::Int32, ::System::Int32>* _OnProgress_k__BackingField; // 0x30
		::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>* _OnFinished_k__BackingField; // 0x38
		::UnityEngine::Coroutine* coroutine; // 0x40
		::System::Int64 _TimeSliceCondInMilliseconds_k__BackingField; // 0x48
		::System::Int32 completeCount; // 0x50
		::System::Int16 emptyRunTimes; // 0x54
		::System::Int16 emptyRunLimit; // 0x56
		::System::Boolean _IsAddDone_k__BackingField; // 0x58
		::System::Boolean isStop; // 0x59
		::System::Int32 totalCount; // 0x5C

		::System::Void _ctor(::System::Int64 condInMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__CTOR_OFFSET))(this, condInMilliseconds);
		}

		::Foundation::LoaderType get_LoaderType()
		{
			return ((::Foundation::LoaderType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_GET_LOADERTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsAddDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_GET_ISADDDONE_OFFSET))(this);
		}

		::System::Void set_IsAddDone(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_SET_ISADDDONE_OFFSET))(this, value);
		}

		::System::Action_2<::System::Int32, ::System::Int32>* get_OnProgress()
		{
			return ((::System::Action_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_GET_ONPROGRESS_OFFSET))(this);
		}

		::System::Void set_OnProgress(::System::Action_2<::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_SET_ONPROGRESS_OFFSET))(this, value);
		}

		::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>* get_OnFinished()
		{
			return ((::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_GET_ONFINISHED_OFFSET))(this);
		}

		::System::Void set_OnFinished(::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_SET_ONFINISHED_OFFSET))(this, value);
		}

		::System::Int64 get_TimeSliceCondInMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_GET_TIMESLICECONDINMILLISECONDS_OFFSET))(this);
		}

		::System::Void set_TimeSliceCondInMilliseconds(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_SET_TIMESLICECONDINMILLISECONDS_OFFSET))(this, value);
		}

		::System::Void Start(::System::Boolean addDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_START_OFFSET))(this, addDone);
		}

		::System::Void Start_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_START_1_OFFSET))(this);
		}

		::System::Void Terminate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_TERMINATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_UPDATE_OFFSET))(this);
		}

		::Foundation::IEnumeratorLoaderNode* Load(::System::Collections::IEnumerator* func, ::System::String* flag, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* dependNodes)
		{
			return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::System::Collections::IEnumerator*, ::System::String*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_LOAD_OFFSET))(this, func, flag, dependNodes);
		}

		::Foundation::IEnumeratorLoaderNode* Load_1(::System::Action* wrapperFunc, ::System::String* flag, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* dependNodes)
		{
			return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::System::Action*, ::System::String*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_LOAD_1_OFFSET))(this, wrapperFunc, flag, dependNodes);
		}

		::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* Load_2(::System::Collections::Generic::IEnumerable_1<::System::Collections::IEnumerator*>* funcs)
		{
			return ((::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::IEnumerator*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_LOAD_2_OFFSET))(this, funcs);
		}

		::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* Load_3(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Collections::IEnumerator*, ::System::String*>>* funcs)
		{
			return ((::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Collections::IEnumerator*, ::System::String*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_LOAD_3_OFFSET))(this, funcs);
		}

		::Foundation::IEnumeratorLoaderNode* AddLoaderNode(::System::Collections::IEnumerator* func, ::System::Predicate_1<::Foundation::IEnumeratorLoaderNode*>* cond, ::System::Action* wrapperFunc, ::System::String* flag, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* dependNodes)
		{
			return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::System::Collections::IEnumerator*, ::System::Predicate_1<::Foundation::IEnumeratorLoaderNode*>*, ::System::Action*, ::System::String*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_ADDLOADERNODE_OFFSET))(this, func, cond, wrapperFunc, flag, dependNodes);
		}

		::System::Void OnLoaderNodeStatusChange(::Foundation::IEnumeratorLoaderNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_ONLOADERNODESTATUSCHANGE_OFFSET))(this, node);
		}

		::System::Void AutoPrepareEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_AUTOPREPAREENV_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LoadLooper()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER_LOADLOOPER_OFFSET))(this);
		}

		::Foundation::IEnumeratorLoaderNode* _Load_b__34_0(::System::Collections::IEnumerator* func)
		{
			return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOAD_B__34_0_OFFSET))(this, func);
		}

		::Foundation::IEnumeratorLoaderNode* _Load_b__35_0(::System::ValueTuple_2<::System::Collections::IEnumerator*, ::System::String*> tuple)
		{
			return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::System::ValueTuple_2<::System::Collections::IEnumerator*, ::System::String*>))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADER__LOAD_B__35_0_OFFSET))(this, tuple);
		}
	};
}
