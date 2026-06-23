#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17718220)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemMedalWidgetController_Context_TypeDefinitionIndex = 81637;

	class UIFriendSystemMedalWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
