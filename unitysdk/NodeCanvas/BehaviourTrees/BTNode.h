#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Node.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace System { class Type; }

#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1AF301E0)
#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_CANSELFCONNECT_OFFSET UNITYSDK_OFFSET(0x1AF301F0)
#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1AF30200)
#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_ICONALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1AF30210)
#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF30220)
#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF30230)
#define NODECANVAS_BEHAVIOURTREES_BTNODE_GET_OUTCONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AF301B0)
#define NODECANVAS_BEHAVIOURTREES_BTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF30240)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BTNode_TypeDefinitionIndex = 27249;

	class BTNode : public ::NodeCanvas::Framework::Node
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE__CTOR_OFFSET))(this);
		}

		::System::Type* get_outConnectionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_OUTCONNECTIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Boolean get_canSelfConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_CANSELFCONNECT_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_iconAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_ICONALIGNMENT_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}
	};
}
