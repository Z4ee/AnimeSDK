#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F46F2034DC32D68.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_1EA8435E138F2E03;
class Class_2_F4F42734846BD0C3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_BINDNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x15C39AA0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ENABLEWIDGET_OFFSET UNITYSDK_OFFSET(0x15C39B40)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x15C397B0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x15C39520)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C39030)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONHOLLOWEXITPOINT_OFFSET UNITYSDK_OFFSET(0x15C39280)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C390C0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C38E60)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_REFRESHPOINT_OFFSET UNITYSDK_OFFSET(0x15C392D0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET UNITYSDK_OFFSET(0x15C39800)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x15C395F0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTABNAMEBYTEXTKEY_OFFSET UNITYSDK_OFFSET(0x15C39CF0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x15C39580)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SHOWLOCK_OFFSET UNITYSDK_OFFSET(0x15C39D60)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C39DD0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C39E30)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C39EC0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C39F50)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03RowWidgetController_TypeDefinitionIndex = 73339;

	class UITabBtn03RowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_F4F42734846BD0C3* _view; // 0x2C0
		::Enum_3_0F46F2034DC32D68 _hollowInfoType; // 0x2C8
		::MoleMole::ESystemSettingType _settingType; // 0x2CC
		::MoleMole::UIGeneralPopUpHintWidgetController* _popCtrl; // 0x2D0
		::System::Action* click; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHollowExitPoint(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONHOLLOWEXITPOINT_OFFSET))(this, _);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetSettingType(::MoleMole::ESystemSettingType tabType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET))(this, tabType);
		}

		::MoleMole::ESystemSettingType GetSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET))(this);
		}

		::System::Void RefreshPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_REFRESHPOINT_OFFSET))(this);
		}

		::System::Void RegisterRedPoint(::Share::ENotificationBadgeType badgeType, ::System::Int32 subID)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET))(this, badgeType, subID);
		}

		::System::Void BindNotificationBadge(::Class_1_1EA8435E138F2E03* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_BINDNOTIFICATIONBADGE_OFFSET))(this, node);
		}

		::System::Void EnableWidget(::Enum_3_F019D5BE4A3284F8 showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ENABLEWIDGET_OFFSET))(this, showType);
		}

		::System::Void SetTabNameByTextKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTABNAMEBYTEXTKEY_OFFSET))(this, key);
		}

		::System::Void ShowLock(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SHOWLOCK_OFFSET))(this, isShow);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
