#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x122BEA00)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__REGISTEREXIT_B__0_OFFSET UNITYSDK_OFFSET(0x122BEA10)

namespace MoleMole
{
	inline static constexpr unsigned int UISuumerEventResultPopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 42622;

	class UISuumerEventResultPopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* exit; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__REGISTEREXIT_B__0_OFFSET))(this);
		}
	};
}
