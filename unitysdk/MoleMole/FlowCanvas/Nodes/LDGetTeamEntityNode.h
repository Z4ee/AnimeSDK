#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE_GETTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x1A020B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A020C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A020D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A020D80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetTeamEntityNode_TypeDefinitionIndex = 86530;

	class LDGetTeamEntityNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outPutValue; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTeamEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE_GETTEAMENTITY_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__2_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTEAMENTITYNODE__REGISTERPORTS_B__2_0_OFFSET))(this);
		}
	};
}
