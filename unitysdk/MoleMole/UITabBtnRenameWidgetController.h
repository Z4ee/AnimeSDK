#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_500F174EF473DBE7;
class Class_2_8A52DA0C3264D618;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ENABLEWIDGET_OFFSET UNITYSDK_OFFSET(0xE466060)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0xE466210)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDNAME_OFFSET UNITYSDK_OFFSET(0xE4658E0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDUID_OFFSET UNITYSDK_OFFSET(0xE4658D0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xE465640)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCLICKRENAME_OFFSET UNITYSDK_OFFSET(0xE465BF0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE465840)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xE4650F0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xE465B60)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xE4658F0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE465AE0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE464EC0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHNAMETEXT_OFFSET UNITYSDK_OFFSET(0xE465750)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHRENAME_OFFSET UNITYSDK_OFFSET(0xE465950)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0xE465A60)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET UNITYSDK_OFFSET(0xE465DC0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_SETTOTOP_OFFSET UNITYSDK_OFFSET(0xE4657D0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE466270)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE466280)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xE466310)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xE4663A0)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE466440)
#define MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE4664D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRenameWidgetController_TypeDefinitionIndex = 50921;

	class UITabBtnRenameWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_8A52DA0C3264D618* _view; // 0x2E8
		::Class_2_E621E51D351EB960* m_model; // 0x2F0
		::System::UInt32 m_buildUid; // 0x2F8
		::System::String* m_buildName; // 0x300
		::MoleMole::UIGeneralPopUpHintWidgetController* _popCtrl; // 0x308
		::System::Action* click; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONDATAUPDATE_OFFSET))(this, args);
		}

		::Class_2_E621E51D351EB960* get_Model()
		{
			return ((::Class_2_E621E51D351EB960*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::UInt32 get_BuildUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDUID_OFFSET))(this);
		}

		::System::String* get_BuildName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GET_BUILDNAME_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshRename(::Class_1_500F174EF473DBE7* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_500F174EF473DBE7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHRENAME_OFFSET))(this, ctx);
		}

		::System::Void Refresh(::Class_1_500F174EF473DBE7* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_500F174EF473DBE7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESH_OFFSET))(this, ctx);
		}

		::System::Void SetToTop(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_SETTOTOP_OFFSET))(this, state);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickRename()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ONCLICKRENAME_OFFSET))(this);
		}

		::System::Void RefreshNameText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REFRESHNAMETEXT_OFFSET))(this);
		}

		::System::Void RegisterRedPoint(::Share::ENotificationBadgeType badgeType, ::System::Int32 subID)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET))(this, badgeType, subID);
		}

		::System::Void EnableWidget(::Enum_3_F019D5BE4A3284F8 showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_ENABLEWIDGET_OFFSET))(this, showType);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNRENAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
