#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABBOSSREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150F6C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossRewardDialogPopWindowController_Context_TypeDefinitionIndex = 73006;

	class UIRABBossRewardDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 bossChallengeId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
