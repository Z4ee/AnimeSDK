#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE_ISENTITYACTIVE_OFFSET UNITYSDK_OFFSET(0x1260AE00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1260AD50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1260B0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1260B1B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetPlayerNode_TypeDefinitionIndex = 52778;

	class LDGetPlayerNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* result; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* outPut; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsEntityActive(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE_ISENTITYACTIVE_OFFSET))(this, ent);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__2_0()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPLAYERNODE__REGISTERPORTS_B__2_0_OFFSET))(this);
		}
	};
}
