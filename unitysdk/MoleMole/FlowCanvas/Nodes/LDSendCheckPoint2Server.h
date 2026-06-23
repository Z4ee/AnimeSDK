#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x161E15B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x161E1730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSendCheckPoint2Server_TypeDefinitionIndex = 48888;

	class LDSendCheckPoint2Server : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER_INVOKE_OFFSET))(this);
		}
	};
}
