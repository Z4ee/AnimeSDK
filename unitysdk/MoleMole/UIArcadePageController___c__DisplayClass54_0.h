#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15628B10)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS54_0__TRYENTERGAMEPHASE_B__0_OFFSET UNITYSDK_OFFSET(0x1562C5F0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS54_0__TRYENTERGAMEPHASE_B__1_OFFSET UNITYSDK_OFFSET(0x1562C690)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass54_0_TypeDefinitionIndex = 75640;

	class UIArcadePageController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadePageController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* finishCB; // 0x20
		::System::Int32 arcadeGameID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryEnterGamePhase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS54_0__TRYENTERGAMEPHASE_B__0_OFFSET))(this);
		}

		::System::Void _TryEnterGamePhase_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS54_0__TRYENTERGAMEPHASE_B__1_OFFSET))(this);
		}
	};
}
