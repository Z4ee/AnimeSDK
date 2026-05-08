#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1529BB40)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x1529C5C0)
#define MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__1_OFFSET UNITYSDK_OFFSET(0x1529C5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelLoseResultPageController___c__DisplayClass13_0_TypeDefinitionIndex = 77627;

	class UILevelLoseResultPageController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__0_OFFSET))(this);
		}

		::System::Void _PlayExit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELLOSERESULTPAGECONTROLLER___C__DISPLAYCLASS13_0__PLAYEXIT_B__1_OFFSET))(this);
		}
	};
}
