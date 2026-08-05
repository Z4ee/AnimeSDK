#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace FlowCanvas::Macros { class Macro; }

#define FLOWCANVAS_MACROS_MACROOUTPUTNODE_GET_ICONALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EB8E890)
#define FLOWCANVAS_MACROS_MACROOUTPUTNODE_GET_MACRO_OFFSET UNITYSDK_OFFSET(0x1EB8E8A0)
#define FLOWCANVAS_MACROS_MACROOUTPUTNODE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0x1EB8EF30)
#define FLOWCANVAS_MACROS_MACROOUTPUTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB8E910)
#define FLOWCANVAS_MACROS_MACROOUTPUTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8EF40)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroOutputNode_TypeDefinitionIndex = 30691;

	class MacroOutputNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_iconAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE_GET_ICONALIGNMENT_OFFSET))(this);
		}

		::FlowCanvas::Macros::Macro* get_macro()
		{
			return ((::FlowCanvas::Macros::Macro*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE_GET_MACRO_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE_ISSERVERCARE_OFFSET))(this);
		}
	};
}
