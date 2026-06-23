#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMINISCAPEMAINENTRYBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB3AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainEntryBtnWidgetController_Context_TypeDefinitionIndex = 69194;

	class UIMiniscapeMainEntryBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::String* InfoDesc; // 0x30
		::System::String* TipsText; // 0x38
		::System::Action* OnClickBtn; // 0x40
		::System::Int32 TaskFinishedNum; // 0x48
		::System::Int32 TaskFullNum; // 0x4C
		::Share::ENotificationBadgeType NotifyType; // 0x50
		::System::Boolean IsTask; // 0x54
		::System::Boolean ShowTips; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINENTRYBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
