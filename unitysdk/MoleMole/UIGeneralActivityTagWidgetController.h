#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F0E18D2802507F5.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_CE751D957B54564C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralActivityTagContext; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x155B0880)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCLICKTAGDETAIL_OFFSET UNITYSDK_OFFSET(0x155B08D0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155B04F0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155B0600)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155B0580)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155B0420)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155B0480)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETACTIVITYTAG_OFFSET UNITYSDK_OFFSET(0x155B0BB0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETCONSOLEREGIONACTIVE_OFFSET UNITYSDK_OFFSET(0x155B0940)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETTAGICON_OFFSET UNITYSDK_OFFSET(0x155B09D0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155B0C70)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155B0CD0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155B0D60)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155B0E00)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155B0E90)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155B0F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagWidgetController_TypeDefinitionIndex = 58176;

	class UIGeneralActivityTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_CE751D957B54564C* _view; // 0x2B8
		::MoleMole::UIGeneralActivityTagContext* context; // 0x2C0
		::System::Int32 tagRuleID; // 0x2C8
		::System::Boolean isExist; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Class_2_CE751D957B54564C* GetView()
		{
			return ((::Class_2_CE751D957B54564C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void OnClickTagDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCLICKTAGDETAIL_OFFSET))(this);
		}

		::System::Void SetConsoleRegionActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETCONSOLEREGIONACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetTagIcon(::Enum_3_5F0E18D2802507F5 tagIcon)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5F0E18D2802507F5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETTAGICON_OFFSET))(this, tagIcon);
		}

		::System::Void SetActivityTag(::System::String* stringTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETACTIVITYTAG_OFFSET))(this, stringTag);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
