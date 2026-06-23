#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_2427A3A85F3C7D26;
class Class_2_137DB615CC6A5FB0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_GET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x16E8CEB0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16E8C5F0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16E8C680)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16E8C420)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16E8C580)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHPARTNERDATEVIEW_OFFSET UNITYSDK_OFFSET(0x16E8CB30)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16E8C780)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x16E8C9F0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTIP_OFFSET UNITYSDK_OFFSET(0x16E8CDD0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_UPDATEINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x16E8C700)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8CEC0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x16E8CF20)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET UNITYSDK_OFFSET(0x16E8CF50)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16E8CF80)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16E8D010)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16E8D0A0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16E8D130)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPersonalOutWidgetController_TypeDefinitionIndex = 40585;

	class UIMainCityPersonalOutWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_137DB615CC6A5FB0* _view; // 0x2C0
		::Class_1_2427A3A85F3C7D26* _interactableAdvanced; // 0x2C8
		::System::Int32 _partnerID; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateInteractable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_UPDATEINTERACTABLE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* textMapKey, ::System::String* textMapKeyEn, ::System::Action* callback, ::System::Int32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, textMapKey, textMapKeyEn, callback, unlockID);
		}

		::System::Void RefreshPartnerDateView(::System::Int32 partnerID, ::System::String* textMapKey, ::System::String* textMapKeyEn, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHPARTNERDATEVIEW_OFFSET))(this, partnerID, textMapKey, textMapKeyEn, callback);
		}

		::System::Void SetText(::System::String* textMapKey, ::System::String* textMapKeyEn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTEXT_OFFSET))(this, textMapKey, textMapKeyEn);
		}

		::System::Void SetTip(::System::Boolean show, ::System::String* tipTextKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTIP_OFFSET))(this, show, tipTextKey);
		}

		::System::Int32 get_PartnerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_GET_PARTNERID_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this, arg);
		}

		::System::Void _OnUIInit_b__2_1(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
