#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/LoginSettingShowState.h"
#include "unitysdk/System/Object.h"

class Class_1_CDA44BE4158CAA8A;
namespace System { class String; }

#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x130240B0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_IGNORERESETSETTING_OFFSET UNITYSDK_OFFSET(0x1304B1A0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1304B180)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x1304B170)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SHOWGENERALDETAILDIALOGID_OFFSET UNITYSDK_OFFSET(0x1304B1B0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x1304B190)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISLOGINSETTINGENABLED_OFFSET UNITYSDK_OFFSET(0x1304B590)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFOINNER_OFFSET UNITYSDK_OFFSET(0x1304B1C0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1304B310)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIIGNORELOGIN_OFFSET UNITYSDK_OFFSET(0x1304B460)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x13027100)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_ISSHOWONUI_OFFSET UNITYSDK_OFFSET(0x1304B4C0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFOINNER_OFFSET UNITYSDK_OFFSET(0x1304B210)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE_OPENDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1304B3B0)
#define MOLEMOLE_SYSTEMSETTINGENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1304B670)

namespace MoleMole
{
	inline static constexpr unsigned int SystemSettingEntryBase_TypeDefinitionIndex = 66375;

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

		::Enum_3_54486B88E1863A04 get_SettingContentType()
		{
			return ((::Enum_3_54486B88E1863A04(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYSTEMSETTINGENTRYBASE_GET_SETTINGCONTENTTYPE_OFFSET))(this);
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
