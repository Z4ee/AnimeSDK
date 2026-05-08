#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace FlowCanvas::Macros { class Macro; }

#define FLOWCANVAS_MACROS_MACROINPUTNODE_GET_ICONALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B499EB0)
#define FLOWCANVAS_MACROS_MACROINPUTNODE_GET_MACRO_OFFSET UNITYSDK_OFFSET(0x1B499EC0)
#define FLOWCANVAS_MACROS_MACROINPUTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B499F30)
#define FLOWCANVAS_MACROS_MACROINPUTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49A4D0)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroInputNode_TypeDefinitionIndex = 27848;

	class MacroInputNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROINPUTNODE__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_iconAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROINPUTNODE_GET_ICONALIGNMENT_OFFSET))(this);
		}

		::FlowCanvas::Macros::Macro* get_macro()
		{
			return ((::FlowCanvas::Macros::Macro*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROINPUTNODE_GET_MACRO_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROINPUTNODE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
