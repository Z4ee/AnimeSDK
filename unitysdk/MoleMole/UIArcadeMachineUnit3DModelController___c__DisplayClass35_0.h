#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIArcadeMachineUnit3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17337790)
#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__DISPLAYCLASS35_0__DELAYSWITCHNEARSCREEN_B__0_OFFSET UNITYSDK_OFFSET(0x173377A0)
#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__DISPLAYCLASS35_0__DELAYSWITCHNEARSCREEN_B__1_OFFSET UNITYSDK_OFFSET(0x17337830)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMachineUnit3DModelController___c__DisplayClass35_0_TypeDefinitionIndex = 58642;

	class UIArcadeMachineUnit3DModelController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeMachineUnit3DModelController* __4__this; // 0x10
		::MoleMole::IVideoPlayer* vp; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _DelaySwitchNearScreen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__DISPLAYCLASS35_0__DELAYSWITCHNEARSCREEN_B__0_OFFSET))(this);
		}

		::System::Void _DelaySwitchNearScreen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__DISPLAYCLASS35_0__DELAYSWITCHNEARSCREEN_B__1_OFFSET))(this);
		}
	};
}
