#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedFieldNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedFieldNodeWrapper_AccessMode.h"

namespace FlowCanvas { class FlowNode; }
namespace System::Reflection { class FieldInfo; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B49B7E0)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49BC20)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedFieldNode_TypeDefinitionIndex = 27644;

	class PureReflectedFieldNode : public ::FlowCanvas::Nodes::Legacy::ReflectedFieldNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node, ::System::Reflection::FieldInfo* field, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode accessMode)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Reflection::FieldInfo*, ::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE_REGISTERPORTS_OFFSET))(this, node, field, accessMode);
		}
	};
}
