#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Connection.h"

namespace FlowCanvas { class Port; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }
namespace System { class Type; }

#define FLOWCANVAS_BINDERCONNECTION_BIND_OFFSET UNITYSDK_OFFSET(0x1BCB2FF0)
#define FLOWCANVAS_BINDERCONNECTION_CANBEBOUNDVERBOSED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BCB2250)
#define FLOWCANVAS_BINDERCONNECTION_CANBEBOUNDVERBOSED_OFFSET UNITYSDK_OFFSET(0x1BCB0020)
#define FLOWCANVAS_BINDERCONNECTION_CANBEBOUND_OFFSET UNITYSDK_OFFSET(0x1BCB2230)
#define FLOWCANVAS_BINDERCONNECTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1BCAF850)
#define FLOWCANVAS_BINDERCONNECTION_GATHERANDVALIDATESOURCEPORT_OFFSET UNITYSDK_OFFSET(0x1BCB0580)
#define FLOWCANVAS_BINDERCONNECTION_GATHERANDVALIDATETARGETPORT_OFFSET UNITYSDK_OFFSET(0x1BCB1410)
#define FLOWCANVAS_BINDERCONNECTION_GET_BINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BCAF740)
#define FLOWCANVAS_BINDERCONNECTION_GET_SOURCEPORTID_OFFSET UNITYSDK_OFFSET(0x1BCAF400)
#define FLOWCANVAS_BINDERCONNECTION_GET_SOURCEPORT_OFFSET UNITYSDK_OFFSET(0x1BCAF500)
#define FLOWCANVAS_BINDERCONNECTION_GET_TARGETPORTID_OFFSET UNITYSDK_OFFSET(0x1BCAF5A0)
#define FLOWCANVAS_BINDERCONNECTION_GET_TARGETPORT_OFFSET UNITYSDK_OFFSET(0x1BCAF6A0)
#define FLOWCANVAS_BINDERCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BCB2A10)
#define FLOWCANVAS_BINDERCONNECTION_SETSOURCEPORT_OFFSET UNITYSDK_OFFSET(0x1BCB0050)
#define FLOWCANVAS_BINDERCONNECTION_SETTARGETPORT_OFFSET UNITYSDK_OFFSET(0x1BCB0EE0)
#define FLOWCANVAS_BINDERCONNECTION_SET_SOURCEPORTID_OFFSET UNITYSDK_OFFSET(0x1BCAF590)
#define FLOWCANVAS_BINDERCONNECTION_SET_TARGETPORTID_OFFSET UNITYSDK_OFFSET(0x1BCAF730)
#define FLOWCANVAS_BINDERCONNECTION_SET_TSETSOURCENODE_OFFSET UNITYSDK_OFFSET(0x1BCAF3E0)
#define FLOWCANVAS_BINDERCONNECTION_SET_TSETSOURCEPORTID_OFFSET UNITYSDK_OFFSET(0x1BCAF3C0)
#define FLOWCANVAS_BINDERCONNECTION_SET_TSETTARGETNODE_OFFSET UNITYSDK_OFFSET(0x1BCAF3F0)
#define FLOWCANVAS_BINDERCONNECTION_SET_TSETTARGETPORTID_OFFSET UNITYSDK_OFFSET(0x1BCAF3D0)
#define FLOWCANVAS_BINDERCONNECTION_UNBIND_OFFSET UNITYSDK_OFFSET(0x1BCB3470)
#define FLOWCANVAS_BINDERCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB0040)

namespace FlowCanvas
{
	inline static constexpr unsigned int BinderConnection_TypeDefinitionIndex = 30354;

	class BinderConnection : public ::NodeCanvas::Framework::Connection
	{
	public:
		::System::String* _sourcePortID; // 0x30
		::System::String* _targetPortID; // 0x38
		::FlowCanvas::Port* _targetPort; // 0x40
		::FlowCanvas::Port* _sourcePort; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION__CTOR_OFFSET))(this);
		}

		::System::Void set_TSetSourcePortID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SET_TSETSOURCEPORTID_OFFSET))(this, value);
		}

		::System::Void set_TSetTargetPortID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SET_TSETTARGETPORTID_OFFSET))(this, value);
		}

		::System::Void set_TSetSourceNode(::NodeCanvas::Framework::Node* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SET_TSETSOURCENODE_OFFSET))(this, value);
		}

		::System::Void set_TSetTargetNode(::NodeCanvas::Framework::Node* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SET_TSETTARGETNODE_OFFSET))(this, value);
		}

		::System::String* get_sourcePortID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GET_SOURCEPORTID_OFFSET))(this);
		}

		::System::Void set_sourcePortID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SET_SOURCEPORTID_OFFSET))(this, value);
		}

		::System::String* get_targetPortID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GET_TARGETPORTID_OFFSET))(this);
		}

		::System::Void set_targetPortID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SET_TARGETPORTID_OFFSET))(this, value);
		}

		::FlowCanvas::Port* get_sourcePort()
		{
			return ((::FlowCanvas::Port*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GET_SOURCEPORT_OFFSET))(this);
		}

		::FlowCanvas::Port* get_targetPort()
		{
			return ((::FlowCanvas::Port*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GET_TARGETPORT_OFFSET))(this);
		}

		::System::Type* get_bindingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GET_BINDINGTYPE_OFFSET))(this);
		}

		static ::FlowCanvas::BinderConnection* Create(::FlowCanvas::Port* source, ::FlowCanvas::Port* target)
		{
			return ((::FlowCanvas::BinderConnection*(*)(::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_CREATE_OFFSET))(source, target);
		}

		::System::Void SetSourcePort(::FlowCanvas::Port* newSourcePort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SETSOURCEPORT_OFFSET))(this, newSourcePort);
		}

		::System::Void SetTargetPort(::FlowCanvas::Port* newTargetPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_SETTARGETPORT_OFFSET))(this, newTargetPort);
		}

		::System::Void GatherAndValidateSourcePort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GATHERANDVALIDATESOURCEPORT_OFFSET))(this);
		}

		::System::Void GatherAndValidateTargetPort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_GATHERANDVALIDATETARGETPORT_OFFSET))(this);
		}

		static ::System::Boolean CanBeBound(::FlowCanvas::Port* source, ::FlowCanvas::Port* target, ::FlowCanvas::BinderConnection* refConnection)
		{
			return ((::System::Boolean(*)(::FlowCanvas::Port*, ::FlowCanvas::Port*, ::FlowCanvas::BinderConnection*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_CANBEBOUND_OFFSET))(source, target, refConnection);
		}

		static ::System::Boolean CanBeBoundVerbosed(::FlowCanvas::Port* source, ::FlowCanvas::Port* target, ::FlowCanvas::BinderConnection* refConnection, ::System::String*& verbose)
		{
			return ((::System::Boolean(*)(::FlowCanvas::Port*, ::FlowCanvas::Port*, ::FlowCanvas::BinderConnection*, ::System::String*&))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_CANBEBOUNDVERBOSED_OFFSET))(source, target, refConnection, verbose);
		}

		static ::System::String* CanBeBoundVerbosed_Internal(::FlowCanvas::Port* source, ::FlowCanvas::Port* target, ::FlowCanvas::BinderConnection* refConnection)
		{
			return ((::System::String*(*)(::FlowCanvas::Port*, ::FlowCanvas::Port*, ::FlowCanvas::BinderConnection*))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_CANBEBOUNDVERBOSED_INTERNAL_OFFSET))(source, target, refConnection);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_ONDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_BIND_OFFSET))(this);
		}

		::System::Void UnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION_UNBIND_OFFSET))(this);
		}
	};
}
