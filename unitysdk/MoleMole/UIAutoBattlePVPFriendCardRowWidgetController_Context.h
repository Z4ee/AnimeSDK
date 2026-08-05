#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;

#define MOLEMOLE_UIAUTOBATTLEPVPFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197E17A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPFriendCardRowWidgetController_Context_TypeDefinitionIndex = 50032;

	class UIAutoBattlePVPFriendCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* briefInfo; // 0x28
		::System::Boolean isFriendInRoom; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
