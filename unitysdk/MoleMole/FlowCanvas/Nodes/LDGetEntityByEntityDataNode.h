#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntityData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1603E940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1603EAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1603EBC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1603EC00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetEntityByEntityDataNode_TypeDefinitionIndex = 51533;

	class LDGetEntityByEntityDataNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityData*>* inputValue; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outputValue; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetEntity(::MoleMole::FlowCanvas::Nodes::EntityData* data)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EntityData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE_GETENTITY_OFFSET))(this, data);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__3_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYBYENTITYDATANODE__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
