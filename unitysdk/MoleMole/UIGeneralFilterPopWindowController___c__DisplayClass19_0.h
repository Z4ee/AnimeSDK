#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralFilterPopContext; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }

#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175DF1A0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x175E20A0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x175E20E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 74842;

	class UIGeneralFilterPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralFilterPopWindowController* __4__this; // 0x10
		::MoleMole::UIGeneralFilterPopContext* popContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
