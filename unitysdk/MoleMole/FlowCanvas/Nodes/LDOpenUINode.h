#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A39B060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39B130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOpenUINode_TypeDefinitionIndex = 73343;

	class LDOpenUINode : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENUINODE_INVOKE_OFFSET))(this);
		}
	};
}
