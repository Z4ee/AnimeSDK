#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData; }

#define MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F888A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBtnWithIconWidgetControllerContext_TypeDefinitionIndex = 78776;

	class UIGeneralBtnWithIconWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRidusGotBooSelectLevelPageController_RidusBooTabBtn03RowData* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBTNWITHICONWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
