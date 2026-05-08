#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTONGOINGTIPS_INVOKE_OFFSET UNITYSDK_OFFSET(0x184179B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTONGOINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x18417B60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptOngoingTips_TypeDefinitionIndex = 70971;

	class LDInterruptOngoingTips : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTONGOINGTIPS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTONGOINGTIPS_INVOKE_OFFSET))(this);
		}
	};
}
