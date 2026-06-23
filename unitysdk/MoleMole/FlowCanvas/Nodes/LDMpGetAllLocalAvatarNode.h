#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR1_OFFSET UNITYSDK_OFFSET(0x182D7A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR2_OFFSET UNITYSDK_OFFSET(0x182D7CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR3_OFFSET UNITYSDK_OFFSET(0x182D7E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATARBYPEERID_OFFSET UNITYSDK_OFFSET(0x182D7C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETONLINEAVATARLIST_OFFSET UNITYSDK_OFFSET(0x182D7F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182D7890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x182D81E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpGetAllLocalAvatarNode_TypeDefinitionIndex = 50260;

	class LDMpGetAllLocalAvatarNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* valueOutputAvatar1; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* valueOutputOnlineAvatarList; // 0xB0
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* valueOutputAvatar2; // 0xB8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* valueOutputAvatar3; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatar1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR1_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatar2()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR2_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatar3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATAR3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetAvatarByPeerId(::System::UInt32 peerId)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETAVATARBYPEERID_OFFSET))(this, peerId);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetOnlineAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPGETALLLOCALAVATARNODE_GETONLINEAVATARLIST_OFFSET))(this);
		}
	};
}
