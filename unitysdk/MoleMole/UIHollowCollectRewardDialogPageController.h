#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x146997E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPageController_TypeDefinitionIndex = 60713;

	class UIHollowCollectRewardDialogPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPAGECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
