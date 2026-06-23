#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x11611F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x11611FF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_MarkAreaMonsterStart_TypeDefinitionIndex = 83911;

	class LD_AbyssS2_MarkAreaMonsterStart : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERSTART__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERSTART_INVOKE_OFFSET))(this);
		}
	};
}
