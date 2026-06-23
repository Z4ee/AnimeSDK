#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178EC5A0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONBUNDLEVERIFIERFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x178EC5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 52307;

	class UIRepairPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoginMessageBoxPopWindowController* tipCtrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBundleVerifierFinished_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONBUNDLEVERIFIERFINISHED_B__0_OFFSET))(this);
		}
	};
}
