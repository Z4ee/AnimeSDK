#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/ViewObject/GroupVariableHelper_WorkingStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_2;
class Class_3_3EC97B498E0B85D2;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_EPILOGUE_OFFSET UNITYSDK_OFFSET(0x13275610)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_FORCESET_OFFSET UNITYSDK_OFFSET(0x13275BB0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x13275750)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PROLOGUE_OFFSET UNITYSDK_OFFSET(0x13275560)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PULL_OFFSET UNITYSDK_OFFSET(0x13275820)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PUSHSINGLE_OFFSET UNITYSDK_OFFSET(0x132759E0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PUSH_OFFSET UNITYSDK_OFFSET(0x13275AE0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x132758E0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x13275FC0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper_TypeDefinitionIndex = 46013;

	class GroupVariableHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Cysharp::Threading::Tasks::UniTask>* _pullingTask; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::System::String*, ::System::Int32>>* _pushingVariables; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTaskCompletionSource*, ::System::Boolean, ::System::Int32>>* _waitingQueue; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*> _pushingTask; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _cachedGroups; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Int32>* _cachedGroupVariables; // 0x48
		::System::Int32 _workingTaskCount; // 0x50
		::Foundation::ViewObject::GroupVariableHelper_WorkingStatus _workingStatus; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask Prologue(::System::Boolean isWrite)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PROLOGUE_OFFSET))(this, isWrite);
		}

		::System::Void Epilogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_EPILOGUE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::Int32>> GetValue(::System::ValueTuple_2<::System::UInt32, ::System::String*> key)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::Int32>>(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::String*>))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_GETVALUE_OFFSET))(this, key);
		}

		::Cysharp::Threading::Tasks::UniTask Pull(::System::UInt32 groupID, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* resultTcs)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::UInt32, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PULL_OFFSET))(this, groupID, resultTcs);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> SetValue(::System::ValueTuple_2<::System::UInt32, ::System::String*> key, ::System::Int32 value, ::Class_3_3EC97B498E0B85D2* reason)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Int32, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_SETVALUE_OFFSET))(this, key, value, reason);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> PushSingle(::System::ValueTuple_2<::System::UInt32, ::System::String*> key, ::System::Int32 value, ::Class_3_3EC97B498E0B85D2* reason)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Int32, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PUSHSINGLE_OFFSET))(this, key, value, reason);
		}

		::Cysharp::Threading::Tasks::UniTask Push(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*>* resultTcs, ::Class_3_3EC97B498E0B85D2* reason)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_2*>*>*, ::Class_3_3EC97B498E0B85D2*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_PUSH_OFFSET))(this, resultTcs, reason);
		}

		::System::Void ForceSet(::System::UInt32 groupID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Int32>* variableMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER_FORCESET_OFFSET))(this, groupID, variableMap);
		}
	};
}
