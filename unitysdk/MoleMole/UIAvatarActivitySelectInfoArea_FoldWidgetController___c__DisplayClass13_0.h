#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_449;
namespace MoleMole { class UIGeneralBuffSelectRowWidgetController; }

#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2F500)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___C__DISPLAYCLASS13_0__ONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x18E2F510)
#define MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___C__DISPLAYCLASS13_0__ONCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x18E2F530)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarActivitySelectInfoArea_FoldWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 49927;

	class UIAvatarActivitySelectInfoArea_FoldWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Int32 cancel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClick_b__0(::Class_0_16E4307DCC419505_449* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_449*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___C__DISPLAYCLASS13_0__ONCLICK_B__0_OFFSET))(this, match);
		}

		::System::Boolean _OnClick_b__1(::MoleMole::UIGeneralBuffSelectRowWidgetController* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralBuffSelectRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYSELECTINFOAREA_FOLDWIDGETCONTROLLER___C__DISPLAYCLASS13_0__ONCLICK_B__1_OFFSET))(this, match);
		}
	};
}
