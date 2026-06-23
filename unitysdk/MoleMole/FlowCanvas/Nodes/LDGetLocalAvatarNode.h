#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE_GETLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x161D6920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x161D6B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161D6C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x161D6C60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLocalAvatarNode_TypeDefinitionIndex = 69874;

	class LDGetLocalAvatarNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* outPutValue; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetLocalAvatar()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE_GETLOCALAVATAR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__2_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARNODE__REGISTERPORTS_B__2_0_OFFSET))(this);
		}
	};
}
