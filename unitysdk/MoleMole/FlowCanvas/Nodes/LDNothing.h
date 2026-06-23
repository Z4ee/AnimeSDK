#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDNOTHING_INVOKE_OFFSET UNITYSDK_OFFSET(0x12612960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDNOTHING__CTOR_OFFSET UNITYSDK_OFFSET(0x126129A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDNothing_TypeDefinitionIndex = 42672;

	class LDNothing : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNOTHING__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDNOTHING_INVOKE_OFFSET))(this);
		}
	};
}
