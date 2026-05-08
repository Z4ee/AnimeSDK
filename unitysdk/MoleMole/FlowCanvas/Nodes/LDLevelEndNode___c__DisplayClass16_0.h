#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDLevelEndNode; }
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1540D5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS16_0___TRYWAITCUTSCENEWHENLEVELEND_B__0_OFFSET UNITYSDK_OFFSET(0x1540D5E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass16_0_TypeDefinitionIndex = 51725;

	class LDLevelEndNode___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryWaitCutSceneWhenLevelEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS16_0___TRYWAITCUTSCENEWHENLEVELEND_B__0_OFFSET))(this);
		}
	};
}
