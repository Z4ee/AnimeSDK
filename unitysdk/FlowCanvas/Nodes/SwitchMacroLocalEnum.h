#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas::Macros { class CustomMacroEnumWrap; }

#define FLOWCANVAS_NODES_SWITCHMACROLOCALENUM_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1B0ECFA0)
#define FLOWCANVAS_NODES_SWITCHMACROLOCALENUM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B0ECBE0)
#define FLOWCANVAS_NODES_SWITCHMACROLOCALENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0ECFB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchMacroLocalEnum_TypeDefinitionIndex = 26608;

	class SwitchMacroLocalEnum : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::Macros::CustomMacroEnumWrap* blackBoardDefineName; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHMACROLOCALENUM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHMACROLOCALENUM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHMACROLOCALENUM_ISCHOICENODE_OFFSET))(this);
		}
	};
}
