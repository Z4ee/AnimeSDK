#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETALLLOCALAVATARNODE_GETLOCALAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17E6C070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETALLLOCALAVATARNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17E6C2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETALLLOCALAVATARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6C370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAllLocalAvatarNode_TypeDefinitionIndex = 83052;

	class LDGetAllLocalAvatarNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETALLLOCALAVATARNODE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetLocalAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETALLLOCALAVATARNODE_GETLOCALAVATARLIST_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETALLLOCALAVATARNODE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
