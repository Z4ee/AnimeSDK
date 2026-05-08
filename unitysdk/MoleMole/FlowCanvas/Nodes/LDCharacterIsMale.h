#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1498C050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1498C180)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCharacterIsMale_TypeDefinitionIndex = 74078;

	class LDCharacterIsMale : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
