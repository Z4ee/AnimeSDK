#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7A267C1006DF3527;
namespace MoleMole { class UIBangkovResultPopWindowController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC44E0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHITEMVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15AC44F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 40903;

	class UIBangkovResultPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovResultPopWindowController* __4__this; // 0x10
		::Class_3_7A267C1006DF3527* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshItemView_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__REFRESHITEMVIEW_B__0_OFFSET))(this, ctrl);
		}
	};
}
