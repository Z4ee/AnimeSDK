#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDLevelEndNode; }
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161D8A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS16_0___TRYWAITCUTSCENEWHENLEVELEND_B__0_OFFSET UNITYSDK_OFFSET(0x161D8A50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass16_0_TypeDefinitionIndex = 54404;

	class LDLevelEndNode___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode* __4__this; // 0x18

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
