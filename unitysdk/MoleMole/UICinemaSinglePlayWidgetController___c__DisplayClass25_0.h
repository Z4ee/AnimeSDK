#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1736F190)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS25_0__WAITUNTILTIMECURSOR_B__0_OFFSET UNITYSDK_OFFSET(0x1736F1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 71497;

	class UICinemaSinglePlayWidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x10
		::System::Single resumeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitUntilTimeCursor_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS25_0__WAITUNTILTIMECURSOR_B__0_OFFSET))(this);
		}
	};
}
