#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ReflectedDelegateEvent_DelegateEventCallback; }
namespace System { class Delegate; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_ADD_OFFSET UNITYSDK_OFFSET(0x1ADAC640)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADAE140)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_ASDELEGATE_OFFSET UNITYSDK_OFFSET(0x1ADAECD0)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_CALLBACK0_OFFSET UNITYSDK_OFFSET(0x1ADAED50)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_GETMETHODFORDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1ADAE250)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1ADAF280)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ADAC810)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ADAE1C0)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADAC2D0)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAE240)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedDelegateEvent_TypeDefinitionIndex = 28138;

	class ReflectedDelegateEvent : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* onCallback; // 0x10
		::System::Delegate* theDelegate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* delegateType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT__CTOR_1_OFFSET))(this, delegateType);
		}

		::System::Void add_onCallback(::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_ADD_ONCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_onCallback(::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_REMOVE_ONCALLBACK_OFFSET))(this, value);
		}

		::System::Void Add(::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_ADD_OFFSET))(this, callback);
		}

		::System::Void Remove(::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::ReflectedDelegateEvent_DelegateEventCallback*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_REMOVE_OFFSET))(this, callback);
		}

		::System::Delegate* AsDelegate()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_ASDELEGATE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethodForDelegateType(::System::Type* delegateType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_GETMETHODFORDELEGATETYPE_OFFSET))(this, delegateType);
		}

		::System::Void Callback0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_CALLBACK0_OFFSET))(this);
		}

		static ::System::Delegate* op_Explicit(::FlowCanvas::Nodes::ReflectedDelegateEvent* that)
		{
			return ((::System::Delegate*(*)(::FlowCanvas::Nodes::ReflectedDelegateEvent*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_OP_EXPLICIT_OFFSET))(that);
		}
	};
}
