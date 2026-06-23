#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UITabBtnController.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_1EA8435E138F2E03;
class Class_2_0549787B82F1ACBE;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_1_OFFSET UNITYSDK_OFFSET(0x172C70E0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_OFFSET UNITYSDK_OFFSET(0x172C6EB0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x172C6870)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x172C6640)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_DISABLEBADGEWIDGET_OFFSET UNITYSDK_OFFSET(0x172C6CF0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_ENABLEBADGEWIDGET_OFFSET UNITYSDK_OFFSET(0x172C6AA0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x172C61E0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_LAZYLOADNOTIFICATIONBADGEEXCOUNT_OFFSET UNITYSDK_OFFSET(0x172C6F40)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_LAZYLOADNOTIFICATIONBADGEEX_OFFSET UNITYSDK_OFFSET(0x172C66D0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172C71C0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172C7250)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETICON_1_OFFSET UNITYSDK_OFFSET(0x172C6360)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETICON_2_OFFSET UNITYSDK_OFFSET(0x172C6480)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x172C62A0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETLIGHT_OFFSET UNITYSDK_OFFSET(0x172C7150)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x172C68E0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172C72D0)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172C7330)
#define MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172C73C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTabBtn01RowWidgetController_TypeDefinitionIndex = 54678;

	class UIBangkovTabBtn01RowWidgetController : public ::MoleMole::UITabBtnController
	{
	public:
		::Class_2_0549787B82F1ACBE* _view; // 0x2C8
		::MoleMole::NotificationBadge* _notificationBadge; // 0x2D0
		::MoleMole::NotificationBadgeEx* _notificationBadgeEx; // 0x2D8
		::MoleMole::NotificationBadgeEx* _notificationBadgeEx_Count; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETICON_OFFSET))(this, iconPath);
		}

		::System::Void SetIcon_1(::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETICON_1_OFFSET))(this, iconPath);
		}

		::System::Void SetIcon_2(::UnityEngine::Sprite* icon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETICON_2_OFFSET))(this, icon);
		}

		::System::Void BindNotificationNode(::Share::ENotificationBadgeType notificationBadgeType, ::NodeGraph::VariantUnion subKey)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET))(this, notificationBadgeType, subKey);
		}

		::System::Void BindNotificationNode_1(::Class_1_1EA8435E138F2E03* notificationNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_1_OFFSET))(this, notificationNode);
		}

		::System::Void LazyLoadNotificationBadgeEx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_LAZYLOADNOTIFICATIONBADGEEX_OFFSET))(this);
		}

		::System::Void SetNotificationBadge(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETNOTIFICATIONBADGE_OFFSET))(this, badgeType);
		}

		::System::Void EnableBadgeWidget(::Enum_3_F019D5BE4A3284F8 _showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_ENABLEBADGEWIDGET_OFFSET))(this, _showType);
		}

		::System::Void DisableBadgeWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_DISABLEBADGEWIDGET_OFFSET))(this);
		}

		::System::Void BindNotificationCountNode(::Share::ENotificationBadgeType notificationBadgeType, ::NodeGraph::VariantUnion subKey)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_OFFSET))(this, notificationBadgeType, subKey);
		}

		::System::Void BindNotificationCountNode_1(::Class_1_1EA8435E138F2E03* notificationNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_1_OFFSET))(this, notificationNode);
		}

		::System::Void LazyLoadNotificationBadgeExCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_LAZYLOADNOTIFICATIONBADGEEXCOUNT_OFFSET))(this);
		}

		::System::Void SetLight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_SETLIGHT_OFFSET))(this, show);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTABBTN01ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
