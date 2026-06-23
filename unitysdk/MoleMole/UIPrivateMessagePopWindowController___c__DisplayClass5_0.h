#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPrivateMessagePopWindowController; }
namespace MoleMole { class UIPrivateMessageRoleWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC3400)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_B__0_OFFSET UNITYSDK_OFFSET(0x15DC3410)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_B__2_OFFSET UNITYSDK_OFFSET(0x15DC3B10)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_B__3_OFFSET UNITYSDK_OFFSET(0x15DC3B80)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_G__SELECTTARGET_1_OFFSET UNITYSDK_OFFSET(0x15DC3820)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c__DisplayClass5_0_TypeDefinitionIndex = 79491;

	class UIPrivateMessagePopWindowController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPrivateMessageRoleWidgetController* curWidget; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::UIPrivateMessagePopWindowController* __4__this; // 0x20
		::System::Int32 targetIdx; // 0x28
		::System::Int32 newIdxForCurUser; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshContactForSettingTop_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_B__0_OFFSET))(this);
		}

		::System::Void _RefreshContactForSettingTop_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_B__2_OFFSET))(this);
		}

		::System::Void _RefreshContactForSettingTop_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_B__3_OFFSET))(this);
		}

		::System::Void _RefreshContactForSettingTop_g__SelectTarget_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS5_0__REFRESHCONTACTFORSETTINGTOP_G__SELECTTARGET_1_OFFSET))(this);
		}
	};
}
