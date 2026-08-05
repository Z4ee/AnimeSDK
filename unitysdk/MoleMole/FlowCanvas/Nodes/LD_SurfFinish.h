#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFINISH_INVOKE_OFFSET UNITYSDK_OFFSET(0x190822E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19082360)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfFinish_TypeDefinitionIndex = 51577;

	class LD_SurfFinish : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFINISH__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFINISH_INVOKE_OFFSET))(this);
		}
	};
}
