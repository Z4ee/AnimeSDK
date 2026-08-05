#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x19247290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAMONSTERSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x19247320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_MarkAreaMonsterStart_TypeDefinitionIndex = 57958;

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
