#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTONGOINGTIPS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A398D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTONGOINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A398F40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptOngoingTips_TypeDefinitionIndex = 74090;

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
