#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDLevelEndNode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1540B800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS15_0___ENDPERFORMCALL_B__1_OFFSET UNITYSDK_OFFSET(0x1540D580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS15_0___ENDPERFORMCALL_G____CALLPERFORMS_0_OFFSET UNITYSDK_OFFSET(0x1540B810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass15_0_TypeDefinitionIndex = 51724;

	class LDLevelEndNode___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode* __4__this; // 0x10
		::System::Boolean enableDelayExit; // 0x18
		::System::Boolean __IsPrepareCalled; // 0x19
		::System::Boolean handlePlayLevelEndCameraPerformElseWhere; // 0x1A
		::System::Boolean success; // 0x1B
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType; // 0x1C
		::System::Single overrideDelayExitTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __EndPerformCall_g____CallPerforms_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS15_0___ENDPERFORMCALL_G____CALLPERFORMS_0_OFFSET))(this);
		}

		::System::Void __EndPerformCall_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS15_0___ENDPERFORMCALL_B__1_OFFSET))(this);
		}
	};
}
