#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/BaseReflectedFieldNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedFieldNodeWrapper_AccessMode.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueInput; }
namespace System { class Object; }
namespace System::Reflection { class FieldInfo; }

#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1CC34D20)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CC34C30)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1CC34DA0)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1CC34C50)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC350C0)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1CC350D0)
#define FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x1CC350E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedFieldNode_TypeDefinitionIndex = 29596;

	class PureReflectedFieldNode : public ::FlowCanvas::Nodes::BaseReflectedFieldNode
	{
	public:
		::FlowCanvas::ValueInput* instanceInput; // 0x88
		::System::Object* valueObject; // 0x90
		::System::Object* instanceObject; // 0x98
		::FlowCanvas::ValueInput* valueInput; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean InitInternal(::System::Reflection::FieldInfo* method)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_INITINTERNAL_OFFSET))(this, method);
		}

		::System::Void SetValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_SETVALUE_OFFSET))(this);
		}

		::System::Void GetValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_GETVALUE_OFFSET))(this);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode accessMode)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE_REGISTERPORTS_OFFSET))(this, node, accessMode);
		}

		::System::Object* _RegisterPorts_b__7_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE__REGISTERPORTS_B__7_0_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__7_1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDFIELDNODE__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
