#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMINISCAPEMAINENTRY02BTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152F8120)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainEntry02BtnWidgetController_Context_TypeDefinitionIndex = 76246;

	class UIMiniscapeMainEntry02BtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickBtn; // 0x28
		::System::String* TipsText; // 0x30
		::System::String* Title; // 0x38
		::System::Int32 ShopItemID; // 0x40
		::System::Int32 CollectionLeftNum; // 0x44
		::System::Int32 CollectionRightNum; // 0x48
		::Share::ENotificationBadgeType NotifyType; // 0x4C
		::System::Boolean ShowTips; // 0x50
		::System::Boolean IsCollection; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINENTRY02BTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
