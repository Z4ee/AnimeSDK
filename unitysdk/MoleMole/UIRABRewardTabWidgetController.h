#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_155;
class Class_2_79F6D62CE30E3F8E_106;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECB5D0)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x16ECC530)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16ECC250)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16ECB700)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECB660)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECB2A0)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_REFRESHREDDOTANDNEW_OFFSET UNITYSDK_OFFSET(0x16ECC320)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16ECB7C0)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_SETSELECTALPHA_OFFSET UNITYSDK_OFFSET(0x16ECC720)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECC7B0)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ECC7C0)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16ECC850)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16ECC8E0)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ECC980)
#define MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ECCA10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABRewardTabWidgetController_TypeDefinitionIndex = 56028;

	class UIRABRewardTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Single NormalAlpha; // 0x0
		// static const ::System::Single WeakFocusAlpha; // 0x0
		::Class_2_79F6D62CE30E3F8E_106* _view; // 0x2F0
		::Class_2_208CC9941471731A_155* _stageConfig; // 0x2F8
		::MoleMole::UIGeneralPopUpHintWidgetController* _redDotCtrl; // 0x300
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrl; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshRedDotAndNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_REFRESHREDDOTANDNEW_OFFSET))(this);
		}

		::System::Void OnFocusStateChanged(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET))(this, isFocus);
		}

		::System::Void SetSelectAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER_SETSELECTALPHA_OFFSET))(this, alpha);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABREWARDTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
