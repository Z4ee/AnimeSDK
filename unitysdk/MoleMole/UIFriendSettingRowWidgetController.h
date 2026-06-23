#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E5FA93B9DBF71D99.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_2F3C7D4EFC74D485;
class Class_2_814741BDEE96A7A7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17717AC0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17717BD0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17717B50)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17717960)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_SWITCHSOCIALSETTING_OFFSET UNITYSDK_OFFSET(0x17717E70)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17717FB0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x17717FC0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17717FD0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17718060)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17718100)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17718190)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSettingRowWidgetController_TypeDefinitionIndex = 51409;

	class UIFriendSettingRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_814741BDEE96A7A7* _view; // 0x2F0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2F8
		::MoleMole::UIGeneralToggleWidgetController* _toggle; // 0x300
		::Enum_3_E5FA93B9DBF71D99 settingType; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SwitchSocialSetting(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_SWITCHSOCIALSETTING_OFFSET))(this, isOn);
		}

		::System::Void _OnScrollItemUpdate_b__5_0(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__5_0_OFFSET))(this, isOn, isInit);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
