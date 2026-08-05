#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBBDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemTitleWidgetController_Context_TypeDefinitionIndex = 48016;

	class UIFriendSystemTitleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
