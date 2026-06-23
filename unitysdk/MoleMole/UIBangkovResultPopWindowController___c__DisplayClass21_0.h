#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7A267C1006DF3527_1;
namespace MoleMole { class UIBangkovResultPopWindowController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C91590)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18C915A0)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x18C915D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 60476;

	class UIBangkovResultPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>* __9__1; // 0x10
		::MoleMole::UIBangkovResultPopWindowController* __4__this; // 0x18
		::Class_3_7A267C1006DF3527_1* item; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshItemView_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__0_OFFSET))(this, ctrl);
		}

		::System::Void _RefreshItemView_b__1(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__1_OFFSET))(this, ctrl);
		}
	};
}
