#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE_GETENTITY_OFFSET UNITYSDK_OFFSET(0x10E09570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E096E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E097C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x10E09800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetEntityNode_TypeDefinitionIndex = 64515;

	class LDGetEntityNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::UInt32>* inputValue; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outPutValue; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetEntity(::System::UInt32 id)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE_GETENTITY_OFFSET))(this, id);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__3_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYNODE__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
