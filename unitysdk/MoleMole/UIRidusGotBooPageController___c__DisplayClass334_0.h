#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace MoleMole { class UIRidusGotBooPageController; }
namespace MoleMole { class UIRidusGotBooResultPageControllerContext; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS334_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C83730)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS334_0__DELAYFADEOUTUIANDPOPRESULTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x14C83740)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass334_0_TypeDefinitionIndex = 40712;

	class UIRidusGotBooPageController___c__DisplayClass334_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::MoleMole::UIRidusGotBooResultPageControllerContext* ctx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS334_0__CTOR_OFFSET))(this);
		}

		::System::Void _DelayFadeoutUIAndPopResultPage_b__0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS334_0__DELAYFADEOUTUIANDPOPRESULTPAGE_B__0_OFFSET))(this, msg);
		}
	};
}
