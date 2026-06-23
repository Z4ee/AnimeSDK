#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVirusMainWidgetController; }

#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C47AD0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIRUSCOLLECTTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x15C47AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusMainWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 67815;

	class UIVirusMainWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVirusMainWidgetController* __4__this; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshVirusCollectTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER___C__DISPLAYCLASS36_0__REFRESHVIRUSCOLLECTTIPS_B__0_OFFSET))(this);
		}
	};
}
