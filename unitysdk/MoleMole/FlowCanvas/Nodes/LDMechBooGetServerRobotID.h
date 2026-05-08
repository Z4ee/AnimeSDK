#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D399C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOGETSERVERROBOTID__CTOR_OFFSET UNITYSDK_OFFSET(0x16D39A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooGetServerRobotID_TypeDefinitionIndex = 62853;

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
