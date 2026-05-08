#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/IDToTaskWrapper_ContentType.h"
#include "unitysdk/System/ValueType.h"

namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94C940)
#define BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x94C950)
#define BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x94C930)
#define BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x94C920)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int IDToTaskWrapper_TypeDefinitionIndex = 31707;

	struct alignas(8) IDToTaskWrapper
	{
		::BehaviorDesigner::Runtime::IDToTaskWrapper_ContentType _contentType; // 0x10
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* _taskList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>* _taskDictionary; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* taskList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER__CTOR_OFFSET))(this, taskList);
		}

		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>* taskDictionary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER__CTOR_1_OFFSET))(this, taskDictionary);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* get_Item(::System::Int32 index)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::BehaviorDesigner::Runtime::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_IDTOTASKWRAPPER_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
