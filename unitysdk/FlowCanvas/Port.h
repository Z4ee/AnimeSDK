#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Port_BindStatus.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class BinderConnection; }
namespace FlowCanvas { class FlowNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GUIContent; }

#define FLOWCANVAS_PORT_CANACCEPTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A8F7B80)
#define FLOWCANVAS_PORT_FLAGINVALIDCAST_OFFSET UNITYSDK_OFFSET(0x1A8F7B60)
#define FLOWCANVAS_PORT_FLAGMISSING_OFFSET UNITYSDK_OFFSET(0x1A8F7B40)
#define FLOWCANVAS_PORT_FLAGVALID_OFFSET UNITYSDK_OFFSET(0x1A8F3FD0)
#define FLOWCANVAS_PORT_GETFIRSTINPUTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A8F7E90)
#define FLOWCANVAS_PORT_GETFIRSTOUTPUTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A8F7FA0)
#define FLOWCANVAS_PORT_GETPORTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A8F7C60)
#define FLOWCANVAS_PORT_GET_BINDSTATUS_OFFSET UNITYSDK_OFFSET(0x1A8F7B00)
#define FLOWCANVAS_PORT_GET_CONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A8F7AE0)
#define FLOWCANVAS_PORT_GET_DISPLAYCONTENT_OFFSET UNITYSDK_OFFSET(0x1A8F7B20)
#define FLOWCANVAS_PORT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A8F7AA0)
#define FLOWCANVAS_PORT_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A8EF4B0)
#define FLOWCANVAS_PORT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A8F7AC0)
#define FLOWCANVAS_PORT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A8F7A80)
#define FLOWCANVAS_PORT_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x1A8F8390)
#define FLOWCANVAS_PORT_ISENUMERABLECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A8F8440)
#define FLOWCANVAS_PORT_ISFLOWPORT_OFFSET UNITYSDK_OFFSET(0x1A8F80B0)
#define FLOWCANVAS_PORT_ISINPUTPORT_OFFSET UNITYSDK_OFFSET(0x1A8F3EB0)
#define FLOWCANVAS_PORT_ISOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0x1A8F3F40)
#define FLOWCANVAS_PORT_ISUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1A8F81D0)
#define FLOWCANVAS_PORT_ISUNITYSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A8F8280)
#define FLOWCANVAS_PORT_ISVALUEPORT_OFFSET UNITYSDK_OFFSET(0x1A8F8140)
#define FLOWCANVAS_PORT_ISWILD_OFFSET UNITYSDK_OFFSET(0x1A8F84B0)
#define FLOWCANVAS_PORT_SET_BINDSTATUS_OFFSET UNITYSDK_OFFSET(0x1A8F7B10)
#define FLOWCANVAS_PORT_SET_CONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A8F7AF0)
#define FLOWCANVAS_PORT_SET_DISPLAYCONTENT_OFFSET UNITYSDK_OFFSET(0x1A8F7B30)
#define FLOWCANVAS_PORT_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A8F7AB0)
#define FLOWCANVAS_PORT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A8F7AD0)
#define FLOWCANVAS_PORT_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A8F7A90)
#define FLOWCANVAS_PORT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8F8500)
#define FLOWCANVAS_PORT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8F7A70)
#define FLOWCANVAS_PORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7A60)
#define FLOWCANVAS_PORT__GETFIRSTINPUTCONNECTION_B__36_0_OFFSET UNITYSDK_OFFSET(0x1A8F8680)
#define FLOWCANVAS_PORT__GETFIRSTOUTPUTCONNECTION_B__37_0_OFFSET UNITYSDK_OFFSET(0x1A8F8710)
#define FLOWCANVAS_PORT__GETPORTCONNECTIONS_B__35_0_OFFSET UNITYSDK_OFFSET(0x1A8F8560)
#define FLOWCANVAS_PORT__GETPORTCONNECTIONS_B__35_1_OFFSET UNITYSDK_OFFSET(0x1A8F85F0)

namespace FlowCanvas
{
	inline static constexpr unsigned int Port_TypeDefinitionIndex = 27221;

	class Port : public ::System::Object
	{
	public:
		::System::String* _ID_k__BackingField; // 0x10
		::System::String* _name_k__BackingField; // 0x18
		::UnityEngine::GUIContent* _displayContent_k__BackingField; // 0x20
		::FlowCanvas::FlowNode* _parent_k__BackingField; // 0x28
		::System::Int32 _connections_k__BackingField; // 0x30
		::FlowCanvas::Port_BindStatus _bindStatus_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT__CTOR_1_OFFSET))(this, parent, name, ID);
		}

		::FlowCanvas::FlowNode* get_parent()
		{
			return ((::FlowCanvas::FlowNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::FlowCanvas::FlowNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_SET_PARENT_OFFSET))(this, value);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_connections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_CONNECTIONS_OFFSET))(this);
		}

		::System::Void set_connections(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_SET_CONNECTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_isConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_ISCONNECTED_OFFSET))(this);
		}

		::FlowCanvas::Port_BindStatus get_bindStatus()
		{
			return ((::FlowCanvas::Port_BindStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_BINDSTATUS_OFFSET))(this);
		}

		::System::Void set_bindStatus(::FlowCanvas::Port_BindStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port_BindStatus))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_SET_BINDSTATUS_OFFSET))(this, value);
		}

		::UnityEngine::GUIContent* get_displayContent()
		{
			return ((::UnityEngine::GUIContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GET_DISPLAYCONTENT_OFFSET))(this);
		}

		::System::Void set_displayContent(::UnityEngine::GUIContent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_SET_DISPLAYCONTENT_OFFSET))(this, value);
		}

		::FlowCanvas::Port* FlagMissing()
		{
			return ((::FlowCanvas::Port*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_FLAGMISSING_OFFSET))(this);
		}

		::FlowCanvas::Port* FlagInvalidCast()
		{
			return ((::FlowCanvas::Port*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_FLAGINVALIDCAST_OFFSET))(this);
		}

		::FlowCanvas::Port* FlagValid()
		{
			return ((::FlowCanvas::Port*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_FLAGVALID_OFFSET))(this);
		}

		::System::Boolean CanAcceptConnections()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_CANACCEPTCONNECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FlowCanvas::BinderConnection*>* GetPortConnections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FlowCanvas::BinderConnection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GETPORTCONNECTIONS_OFFSET))(this);
		}

		::FlowCanvas::BinderConnection* GetFirstInputConnection()
		{
			return ((::FlowCanvas::BinderConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GETFIRSTINPUTCONNECTION_OFFSET))(this);
		}

		::FlowCanvas::BinderConnection* GetFirstOutputConnection()
		{
			return ((::FlowCanvas::BinderConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_GETFIRSTOUTPUTCONNECTION_OFFSET))(this);
		}

		::System::Boolean IsFlowPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISFLOWPORT_OFFSET))(this);
		}

		::System::Boolean IsValuePort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISVALUEPORT_OFFSET))(this);
		}

		::System::Boolean IsInputPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISINPUTPORT_OFFSET))(this);
		}

		::System::Boolean IsOutputPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISOUTPUTPORT_OFFSET))(this);
		}

		::System::Boolean IsUnityObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISUNITYOBJECT_OFFSET))(this);
		}

		::System::Boolean IsUnitySceneObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISUNITYSCENEOBJECT_OFFSET))(this);
		}

		::System::Boolean IsDelegate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISDELEGATE_OFFSET))(this);
		}

		::System::Boolean IsEnumerableCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISENUMERABLECOLLECTION_OFFSET))(this);
		}

		::System::Boolean IsWild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_ISWILD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean _GetPortConnections_b__35_0(::FlowCanvas::BinderConnection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::BinderConnection*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT__GETPORTCONNECTIONS_B__35_0_OFFSET))(this, c);
		}

		::System::Boolean _GetPortConnections_b__35_1(::FlowCanvas::BinderConnection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::BinderConnection*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT__GETPORTCONNECTIONS_B__35_1_OFFSET))(this, c);
		}

		::System::Boolean _GetFirstInputConnection_b__36_0(::FlowCanvas::BinderConnection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::BinderConnection*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT__GETFIRSTINPUTCONNECTION_B__36_0_OFFSET))(this, c);
		}

		::System::Boolean _GetFirstOutputConnection_b__37_0(::FlowCanvas::BinderConnection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::BinderConnection*))((::PBYTE)hIl2Cpp + FLOWCANVAS_PORT__GETFIRSTOUTPUTCONNECTION_B__37_0_OFFSET))(this, c);
		}
	};
}
