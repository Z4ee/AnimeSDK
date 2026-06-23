#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { class ActionCall; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE_CALL_OFFSET UNITYSDK_OFFSET(0x1D81D6E0)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D81D700)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D810)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_TypeDefinitionIndex = 30880;

	class ReflectedActionNode : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall* call; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE__CTOR_OFFSET))(this);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE_CALL_OFFSET))(this);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node, ::System::Reflection::MethodInfo* method, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Reflection::MethodInfo*, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDACTIONNODE_REGISTERPORTS_OFFSET))(this, node, method, options);
		}
	};
}
