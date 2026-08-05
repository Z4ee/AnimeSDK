#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E46C7200C98EA660;
namespace MoleMole { class UIZenkovControlCenterPageController; }

#define MOLEMOLE_UIZENKOVBUILDINGUPGRADEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D98910)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBuildingUpgradeDialogPopWindowController_Context_TypeDefinitionIndex = 42404;

	class UIZenkovBuildingUpgradeDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E46C7200C98EA660* BuildingData; // 0x28
		::MoleMole::UIZenkovControlCenterPageController* Ctrl; // 0x30
		::System::Int32 DstLevel; // 0x38
		::System::Int32 Level; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBUILDINGUPGRADEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
