#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWERWIPEOUTPERFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1499BE40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWERWIPEOUTPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1499C020)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTowerWipeOutPerform_TypeDefinitionIndex = 68965;

	class LD_BabelTowerWipeOutPerform : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWERWIPEOUTPERFORM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWERWIPEOUTPERFORM_INVOKE_OFFSET))(this);
		}
	};
}
