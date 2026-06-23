#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A020570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0206B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetRoleBuddyNode_TypeDefinitionIndex = 42124;

	class LDGetRoleBuddyNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outPutValue; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETROLEBUDDYNODE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
