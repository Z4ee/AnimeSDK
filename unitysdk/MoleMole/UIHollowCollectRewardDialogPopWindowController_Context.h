#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB29F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController_Context_TypeDefinitionIndex = 85820;

	class UIHollowCollectRewardDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AbyssGroupId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
