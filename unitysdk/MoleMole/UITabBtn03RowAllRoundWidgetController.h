#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_1EA8435E138F2E03;
class Class_2_E5B6798F8C52E39C;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_BINDNEWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16188A50)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGENEWBADGETYPE_OFFSET UNITYSDK_OFFSET(0x16188780)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGEREDDOTBADGETYPE_OFFSET UNITYSDK_OFFSET(0x16188710)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETBATTLEINFONAME_OFFSET UNITYSDK_OFFSET(0x16188440)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x16188AC0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x16188660)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETUITABBUTTON_OFFSET UNITYSDK_OFFSET(0x161886B0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16187F80)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16188010)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16188090)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERNEWSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x16188870)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERREDDOTSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x161887F0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x16188B20)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x16188270)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x161881E0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x16188170)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNEWNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x161889A0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x161888F0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16188B70)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16188BD0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16188C60)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16188CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03RowAllRoundWidgetController_TypeDefinitionIndex = 46040;

	class UITabBtn03RowAllRoundWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E5B6798F8C52E39C* _view; // 0x2C0
		::MoleMole::ESystemSettingType _settingType; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTextmapKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXTMAPKEY_OFFSET))(this, key);
		}

		::System::Void SetSettingType(::MoleMole::ESystemSettingType tabType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET))(this, tabType);
		}

		::MoleMole::ESystemSettingType GetSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetUITabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETUITABBUTTON_OFFSET))(this);
		}

		::System::Void ChangeRedDotBadgeType(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGEREDDOTBADGETYPE_OFFSET))(this, badgeType);
		}

		::System::Void ChangeNewBadgeType(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGENEWBADGETYPE_OFFSET))(this, badgeType);
		}

		::System::Void RegisterRedDotSubNotify(::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERREDDOTSUBNOTIFY_OFFSET))(this, subId);
		}

		::System::Void RegisterNewSubNotify(::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERNEWSUBNOTIFY_OFFSET))(this, subId);
		}

		::System::Void SetupNotificationBadge(::Share::ENotificationBadgeType badgeType, ::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_OFFSET))(this, badgeType, subId);
		}

		::System::Void SetupNewNotificationBadge(::Share::ENotificationBadgeType badgeType, ::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNEWNOTIFICATIONBADGE_OFFSET))(this, badgeType, subId);
		}

		::System::Void BindNewNotification(::Class_1_1EA8435E138F2E03* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_BINDNEWNOTIFICATION_OFFSET))(this, node);
		}

		::MoleMole::NotificationBadge* GetNotificationBadge()
		{
			return ((::MoleMole::NotificationBadge*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETNOTIFICATIONBADGE_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, isSelected);
		}

		::System::String* GetBattleInfoName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETBATTLEINFONAME_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
