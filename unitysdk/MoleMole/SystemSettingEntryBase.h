#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/LoginSettingShowState.h"
#include "unitysdk/System/Object.h"

class Class_1_CDA44BE4158CAA8A;
namespace System { class String; }

#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x1737DB80)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_IGNORERESETSETTING_OFFSET UNITYSDK_OFFSET(0x173A97E0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x173A97C0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x173A97B0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SHOWGENERALDETAILDIALOGID_OFFSET UNITYSDK_OFFSET(0x173A97F0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x173A97D0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISLOGINSETTINGENABLED_OFFSET UNITYSDK_OFFSET(0x173A9BD0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFOINNER_OFFSET UNITYSDK_OFFSET(0x173A9800)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFO_OFFSET UNITYSDK_OFFSET(0x173A9950)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIIGNORELOGIN_OFFSET UNITYSDK_OFFSET(0x173A9AA0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x17380B40)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUI_OFFSET UNITYSDK_OFFSET(0x173A9B00)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFOINNER_OFFSET UNITYSDK_OFFSET(0x173A9850)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFO_OFFSET UNITYSDK_OFFSET(0x173A99F0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9CB0)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingEntryBase_TypeDefinitionIndex = 57815;

	class SystemSettingEntryBase : public ::System::Object
	{
	public:
		::System::String* TitleTextCode; // 0x10
		::System::String* EnTitleTextCode; // 0x18
		::System::Int32 HintVersion; // 0x20
		::System::Int32 VersionCode; // 0x24
		::MoleMole::LoginSettingShowState LoginSettingShowStateOnUI; // 0x28
		::System::Boolean HideOnUI; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE__CTOR_OFFSET))(this);
		}

		::Enum_3_E64C24AE0799EB7C get_SettingWidgetType()
		{
			return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::System::Boolean get_IgnoreResetSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_IGNORERESETSETTING_OFFSET))(this);
		}

		::System::Int32 get_ShowGeneralDetailDialogID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SHOWGENERALDETAILDIALOGID_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Boolean IsShowDetailInfoInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFOINNER_OFFSET))(this);
		}

		::System::Void OpenDetailInfoInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFOINNER_OFFSET))(this);
		}

		::System::Boolean IsShowDetailInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFO_OFFSET))(this);
		}

		::System::Void OpenDetailInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFO_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIIgnoreLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIIGNORELOGIN_OFFSET))(this);
		}

		::System::Boolean IsShowOnUI(::MoleMole::ESystemSettingType systemSettingType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUI_OFFSET))(this, systemSettingType);
		}

		::System::Boolean IsLoginSettingEnabled(::MoleMole::ESystemSettingType systemSettingType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISLOGINSETTINGENABLED_OFFSET))(this, systemSettingType);
		}
	};
}
