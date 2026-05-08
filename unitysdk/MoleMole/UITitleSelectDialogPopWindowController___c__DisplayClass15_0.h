#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMedalSelectRowWidgetController_Context; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1340E560)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKMEDALITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1340E570)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 62082;

	class UITitleSelectDialogPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Int32 modifyGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickMedalItem_b__0(::MoleMole::UIMedalSelectRowWidgetController_Context* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMedalSelectRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKMEDALITEM_B__0_OFFSET))(this, item);
		}
	};
}
