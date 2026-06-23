#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEOBJECTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x151131B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEOBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15113290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEOBJECTNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x15113360)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSceneObjectNode_TypeDefinitionIndex = 49396;

	class LDGetSceneObjectNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outPut; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* ObjectName; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* result; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEOBJECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEOBJECTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__3_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEOBJECTNODE__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
