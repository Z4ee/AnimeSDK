#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABStageInfoPopWindowController; }

#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1845CE90)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_G__ONAFTERREFRESH_0_OFFSET UNITYSDK_OFFSET(0x1845CEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageInfoPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 91172;

	class UIRABStageInfoPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABStageInfoPopWindowController* __4__this; // 0x10
		::System::Int32 scrollToIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_g__OnAfterRefresh_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_G__ONAFTERREFRESH_0_OFFSET))(this);
		}
	};
}
