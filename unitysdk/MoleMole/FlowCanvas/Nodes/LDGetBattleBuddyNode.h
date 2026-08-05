#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19240520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19240660)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBattleBuddyNode_TypeDefinitionIndex = 55328;

	class LDGetBattleBuddyNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outPutValue; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBATTLEBUDDYNODE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
