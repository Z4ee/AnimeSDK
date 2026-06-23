#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1BCC8720)
#define NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_DECORATEDCONNECTION_OFFSET UNITYSDK_OFFSET(0x1BCC8730)
#define NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_DECORATEDNODE_OFFSET UNITYSDK_OFFSET(0x1BCC8790)
#define NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1BCC8710)
#define NODECANVAS_BEHAVIOURTREES_BTDECORATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC87F0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BTDecorator_TypeDefinitionIndex = 30489;

	class BTDecorator : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTDECORATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}

		::NodeCanvas::Framework::Connection* get_decoratedConnection()
		{
			return ((::NodeCanvas::Framework::Connection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_DECORATEDCONNECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Node* get_decoratedNode()
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTDECORATOR_GET_DECORATEDNODE_OFFSET))(this);
		}
	};
}
