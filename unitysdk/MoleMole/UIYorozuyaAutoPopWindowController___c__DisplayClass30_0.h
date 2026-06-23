#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaAutoPopWindowController; }

#define MOLEMOLE_UIYOROZUYAAUTOPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x122D9A10)
#define MOLEMOLE_UIYOROZUYAAUTOPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__ONOKCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x122D9A20)
#define MOLEMOLE_UIYOROZUYAAUTOPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__ONOKCLICKHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x122D9B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAutoPopWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 62787;

	class UIYorozuyaAutoPopWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaAutoPopWindowController* __4__this; // 0x10
		::System::Int32 hollowQuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAAUTOPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOkClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAAUTOPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__ONOKCLICKHANDLE_B__0_OFFSET))(this);
		}

		::System::Void _OnOkClickHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAAUTOPOPWINDOWCONTROLLER___C__DISPLAYCLASS30_0__ONOKCLICKHANDLE_B__1_OFFSET))(this);
		}
	};
}
