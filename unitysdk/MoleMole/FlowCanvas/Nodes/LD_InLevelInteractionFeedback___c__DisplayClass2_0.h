#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_InLevelInteractionFeedback; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2E8F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__DISPLAYCLASS2_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x18B2E900)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__DISPLAYCLASS2_0__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x18B2E950)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelInteractionFeedback___c__DisplayClass2_0_TypeDefinitionIndex = 61467;

	class LD_InLevelInteractionFeedback___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_InLevelInteractionFeedback* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__DISPLAYCLASS2_0__REGISTERPORTS_B__2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELINTERACTIONFEEDBACK___C__DISPLAYCLASS2_0__REGISTERPORTS_B__3_OFFSET))(this);
		}
	};
}
