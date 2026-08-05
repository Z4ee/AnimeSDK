#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6E390)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController_Context_TypeDefinitionIndex = 66022;

	class UIZenkovLotteryGamePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnUiClose; // 0x28
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 MemberID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
