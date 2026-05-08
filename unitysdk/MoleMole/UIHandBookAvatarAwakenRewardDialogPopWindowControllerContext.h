#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15257980)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAvatarAwakenRewardDialogPopWindowControllerContext_TypeDefinitionIndex = 38505;

	class UIHandBookAvatarAwakenRewardDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAVATARAWAKENREWARDDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
