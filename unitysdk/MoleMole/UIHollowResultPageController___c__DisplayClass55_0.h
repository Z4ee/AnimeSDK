#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18843740)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x18843750)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass55_0_TypeDefinitionIndex = 41924;

	class UIHollowResultPageController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultPageController* __4__this; // 0x10
		::System::Int32 expNeededForNxtLv; // 0x18
		::System::Int32 remainExp; // 0x1C
		::System::Int32 curLv; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
