#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1260E2A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1260E2E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooGetServerRobotID_TypeDefinitionIndex = 74253;

	class LDMechBooGetServerRobotID : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID_INVOKE_OFFSET))(this);
		}
	};
}
