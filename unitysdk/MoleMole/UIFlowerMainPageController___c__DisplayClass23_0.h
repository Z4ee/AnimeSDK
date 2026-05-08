#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFlowerMainPageController; }

#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157EAC90)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__ONCLICKFINISHBUTTON_B__0_OFFSET UNITYSDK_OFFSET(0x157EACA0)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__ONCLICKFINISHBUTTON_B__1_OFFSET UNITYSDK_OFFSET(0x157EACD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainPageController___c__DisplayClass23_0_TypeDefinitionIndex = 54412;

	class UIFlowerMainPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFlowerMainPageController* __4__this; // 0x10
		::MoleMole::UI::FlowerShop::EFinishJudge judge; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickFinishButton_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__ONCLICKFINISHBUTTON_B__0_OFFSET))(this);
		}

		::System::Void _OnClickFinishButton_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__ONCLICKFINISHBUTTON_B__1_OFFSET))(this);
		}
	};
}
