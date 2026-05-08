#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedEventArgs.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IList; }

#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x1C2659B0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1C265A10)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_ISINVOKECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C2659D0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_ISINVOKEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C2659F0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C265A30)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x1C2659C0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1C265A20)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_ISINVOKECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C2659E0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_ISINVOKEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C265A00)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1C265B50)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C265AC0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C265AD0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C265AE0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C265AF0)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1C265B00)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1C265B10)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1C265B20)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1C265B30)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1C265B40)
#define OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C265AB0)

namespace ObservableCollections
{
	inline static constexpr unsigned int CollectionEventDispatcherEventArgs_TypeDefinitionIndex = 25588;

	class CollectionEventDispatcherEventArgs : public ::System::Collections::Specialized::NotifyCollectionChangedEventArgs
	{
	public:
		::System::Action_1<::ObservableCollections::CollectionEventDispatcherEventArgs*>* _Invoker_k__BackingField; // 0x30
		::System::Object* _Collection_k__BackingField; // 0x38
		::System::Boolean _IsInvokePropertyChanged_k__BackingField; // 0x40
		::System::Boolean _IsInvokeCollectionChanged_k__BackingField; // 0x41

		::System::Void _ctor(::System::Collections::Specialized::NotifyCollectionChangedAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_OFFSET))(this, action);
		}

		::System::Void _ctor_1(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_1_OFFSET))(this, action, changedItems);
		}

		::System::Void _ctor_2(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_2_OFFSET))(this, action, changedItem);
		}

		::System::Void _ctor_3(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_3_OFFSET))(this, action, newItems, oldItems);
		}

		::System::Void _ctor_4(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, ::System::Int32 startingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_4_OFFSET))(this, action, changedItems, startingIndex);
		}

		::System::Void _ctor_5(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_5_OFFSET))(this, action, changedItem, index);
		}

		::System::Void _ctor_6(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_6_OFFSET))(this, action, newItem, oldItem);
		}

		::System::Void _ctor_7(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* newItems, ::System::Collections::IList* oldItems, ::System::Int32 startingIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_7_OFFSET))(this, action, newItems, oldItems, startingIndex);
		}

		::System::Void _ctor_8(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Collections::IList* changedItems, ::System::Int32 index, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Collections::IList*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_8_OFFSET))(this, action, changedItems, index, oldIndex);
		}

		::System::Void _ctor_9(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* changedItem, ::System::Int32 index, ::System::Int32 oldIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_9_OFFSET))(this, action, changedItem, index, oldIndex);
		}

		::System::Void _ctor_10(::System::Collections::Specialized::NotifyCollectionChangedAction action, ::System::Object* newItem, ::System::Object* oldItem, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS__CTOR_10_OFFSET))(this, action, newItem, oldItem, index);
		}

		::System::Object* get_Collection()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_COLLECTION_OFFSET))(this);
		}

		::System::Void set_Collection(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_COLLECTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsInvokeCollectionChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_ISINVOKECOLLECTIONCHANGED_OFFSET))(this);
		}

		::System::Void set_IsInvokeCollectionChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_ISINVOKECOLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::Boolean get_IsInvokePropertyChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_ISINVOKEPROPERTYCHANGED_OFFSET))(this);
		}

		::System::Void set_IsInvokePropertyChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_ISINVOKEPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Action_1<::ObservableCollections::CollectionEventDispatcherEventArgs*>* get_Invoker()
		{
			return ((::System::Action_1<::ObservableCollections::CollectionEventDispatcherEventArgs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_GET_INVOKER_OFFSET))(this);
		}

		::System::Void set_Invoker(::System::Action_1<::ObservableCollections::CollectionEventDispatcherEventArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ObservableCollections::CollectionEventDispatcherEventArgs*>*))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_SET_INVOKER_OFFSET))(this, value);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBSERVABLECOLLECTIONS_COLLECTIONEVENTDISPATCHEREVENTARGS_INVOKE_OFFSET))(this);
		}
	};
}
