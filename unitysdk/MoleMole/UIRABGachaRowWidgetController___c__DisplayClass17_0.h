#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E542FA6AD8EA44A5_3;
namespace MoleMole { class UIRABAutoBattleBase3DModelController; }
namespace MoleMole { class UIRABGachaRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137FBB30)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x137FBB40)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x137FBBC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaRowWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 57124;

	class UIRABGachaRowWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABAutoBattleBase3DModelController* baseCtrl3D; // 0x10
		::System::Action* __9__1; // 0x18
		::Class_3_E542FA6AD8EA44A5_3* rsp; // 0x20
		::MoleMole::UIRABGachaRowWidgetController* __4__this; // 0x28
		::System::Int32 maxRarity; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPullSuccessHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__0_OFFSET))(this);
		}

		::System::Void _OnPullSuccessHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONPULLSUCCESSHANDLE_B__1_OFFSET))(this);
		}
	};
}
