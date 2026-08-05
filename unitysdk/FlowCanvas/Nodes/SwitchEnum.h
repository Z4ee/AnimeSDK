#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_SWITCHENUM_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E7A8070)
#define FLOWCANVAS_NODES_SWITCHENUM_GET_STYPE_OFFSET UNITYSDK_OFFSET(0x1E7A7BF0)
#define FLOWCANVAS_NODES_SWITCHENUM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E7A7BD0)
#define FLOWCANVAS_NODES_SWITCHENUM_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1E7A8060)
#define FLOWCANVAS_NODES_SWITCHENUM_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1E7A80A0)
#define FLOWCANVAS_NODES_SWITCHENUM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A7C90)
#define FLOWCANVAS_NODES_SWITCHENUM_SET_STYPE_OFFSET UNITYSDK_OFFSET(0x1E7A7C10)
#define FLOWCANVAS_NODES_SWITCHENUM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E7A7BE0)
#define FLOWCANVAS_NODES_SWITCHENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8250)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchEnum_TypeDefinitionIndex = 29762;

	class SwitchEnum : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::SerializedTypeInfo* get_type()
		{
			return ((::ParadoxNotion::Serialization::SerializedTypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::ParadoxNotion::Serialization::SerializedTypeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::SerializedTypeInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_SET_TYPE_OFFSET))(this, value);
		}

		::System::Type* get_SType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_GET_STYPE_OFFSET))(this);
		}

		::System::Void set_SType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_SET_STYPE_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_ISCHOICENODE_OFFSET))(this);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}
	};
}
