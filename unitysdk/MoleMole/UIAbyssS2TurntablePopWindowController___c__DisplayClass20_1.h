#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_49;
class Class_3_41BA658AB33F544B_2;
namespace MoleMole { class UIAbyssS2TurntablePopWindowController___c__DisplayClass20_0; }

#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2AD40)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_1__ONCLICKPAYBTN_B__2_OFFSET UNITYSDK_OFFSET(0x17A2AD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TurntablePopWindowController___c__DisplayClass20_1_TypeDefinitionIndex = 82798;

	class UIAbyssS2TurntablePopWindowController___c__DisplayClass20_1 : public ::System::Object
	{
	public:
		::Class_3_41BA658AB33F544B_2* turntableData; // 0x10
		::MoleMole::UIAbyssS2TurntablePopWindowController___c__DisplayClass20_0* CS___8__locals1; // 0x18
		::Class_2_208CC9941471731A_49* targetConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickPayBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_1__ONCLICKPAYBTN_B__2_OFFSET))(this);
		}
	};
}
