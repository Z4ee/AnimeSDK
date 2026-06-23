#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161D8D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS17_0___PLAYCAMERASEQUENCEANDASCRIPT_G____ONANISCRIPT_PERFORMFINISHED_0_OFFSET UNITYSDK_OFFSET(0x161D8D20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass17_0_TypeDefinitionIndex = 54402;

	class LDLevelEndNode___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Boolean enableDelayExit; // 0x10
		::System::Boolean success; // 0x11
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType; // 0x14
		::System::Single delayExitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayCameraSequenceAndAScript_g____OnAniScript_PerformFinished_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS17_0___PLAYCAMERASEQUENCEANDASCRIPT_G____ONANISCRIPT_PERFORMFINISHED_0_OFFSET))(this);
		}
	};
}
