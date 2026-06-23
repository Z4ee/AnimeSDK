#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS165_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1695E970)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS165_0__WAITUNTILTIMECURSOR_B__0_OFFSET UNITYSDK_OFFSET(0x1695E980)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass165_0_TypeDefinitionIndex = 44130;

	class UIPlayerAccessoryPageController___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::System::Single resumeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS165_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitUntilTimeCursor_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS165_0__WAITUNTILTIMECURSOR_B__0_OFFSET))(this);
		}
	};
}
