#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABDepositoryUpTipsWidgetController; }

#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1569A100)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONFADEPLAYFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x1569A110)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONFADEPLAYFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x1569A120)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryUpTipsWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 42332;

	class UIRABDepositoryUpTipsWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABDepositoryUpTipsWidgetController* __4__this; // 0x10
		::System::Int32 startNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Single _OnFadePlayFinish_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONFADEPLAYFINISH_B__0_OFFSET))(this);
		}

		::System::Void _OnFadePlayFinish_b__1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONFADEPLAYFINISH_B__1_OFFSET))(this, value);
		}
	};
}
