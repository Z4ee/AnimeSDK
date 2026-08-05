#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBOSSCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x192AD710)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardDialogPopWindowController_Context_TypeDefinitionIndex = 72840;

	class UIBossChallengeRewardDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_DB663931210BBC27_38 PlayType; // 0x28
		::System::Int32 ZoneID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
