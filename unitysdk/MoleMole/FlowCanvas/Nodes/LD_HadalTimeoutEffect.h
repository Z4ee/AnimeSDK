#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALTIMEOUTEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x190812C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALTIMEOUTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19081390)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalTimeoutEffect_TypeDefinitionIndex = 69472;

	class LD_HadalTimeoutEffect : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALTIMEOUTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALTIMEOUTEFFECT_INVOKE_OFFSET))(this);
		}
	};
}
