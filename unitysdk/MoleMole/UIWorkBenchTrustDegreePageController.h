#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/UIWorkBenchTrustDegreePageController___c__DisplayClass6_0.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_57F4F2E1F75850CE;
class Class_2_6D99A03C58ED2B6E_5;
class Class_2_CEF0D076577A9E4E;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWorkBenchTrustDegreeDetailsCardWidgetController; }
namespace MoleMole { class UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_BUTTON_OFFSET UNITYSDK_OFFSET(0x140F1E60)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_NOTIFY_OFFSET UNITYSDK_OFFSET(0x140F2550)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x140F22E0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_TABBUTTONGROUP_OFFSET UNITYSDK_OFFSET(0x140F2020)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BUILDPARTNERDATA_OFFSET UNITYSDK_OFFSET(0x140F4E90)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x140F1D50)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_INITPARTNERCAMPDATA_OFFSET UNITYSDK_OFFSET(0x140F2F80)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_INITPARTNERDATA_OFFSET UNITYSDK_OFFSET(0x140F4BB0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0x140F25F0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140F1D60)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x140F4170)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x140F4270)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONSELECTCAMPTYPE_OFFSET UNITYSDK_OFFSET(0x140F4610)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x140F4370)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140F4100)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140F1DF0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140F2690)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONWORKBENCHDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x140F54E0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_SELECTEDCAMP_OFFSET UNITYSDK_OFFSET(0x140F4800)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_SELECTEDTRUSTDEGREEITEM_OFFSET UNITYSDK_OFFSET(0x140F51C0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_TRYREADLASTPARTNERPOPUPS_OFFSET UNITYSDK_OFFSET(0x140F5310)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__BINDEVENT_BUTTON_B__11_0_OFFSET UNITYSDK_OFFSET(0x140F5690)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140F5530)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__ONUIOPEN_G__GETCAMPINDEX_6_1_OFFSET UNITYSDK_OFFSET(0x140F3D80)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__ONUIOPEN_G__GETCAMPTYPEINDEX_6_0_OFFSET UNITYSDK_OFFSET(0x140F3C90)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__ONUIOPEN_G__GETPARTNERINDEX_6_2_OFFSET UNITYSDK_OFFSET(0x140F3F60)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140F5790)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x140F5820)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x140F58B0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x140F5940)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140F5A00)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140F5A10)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140F5A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController_TypeDefinitionIndex = 58033;

	class UIWorkBenchTrustDegreePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_57F4F2E1F75850CE* _view; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_6D99A03C58ED2B6E_5*>*>* _partnerCampConfigTemplateDatas; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData*>* _campTypeData; // 0x328
		::System::Collections::Generic::List_1<::Class_2_CEF0D076577A9E4E*>* _partnerConfigTemplateDatas; // 0x330
		::MoleMole::UIWorkBenchTrustDegreeDetailsCardWidgetController* _detailsCardWidget; // 0x338
		::System::Int32 currentCampID; // 0x340
		::System::Int32 _delayReadRedPointCampID; // 0x344
		::System::Int32 _lastSelectIdx; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void BindEvent_Button()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_BUTTON_OFFSET))(this);
		}

		::System::Void BindEvent_TabButtonGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_TABBUTTONGROUP_OFFSET))(this);
		}

		::System::Void BindEvent_ScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_SCROLLVIEW_OFFSET))(this);
		}

		::System::Void BindEvent_Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BINDEVENT_NOTIFY_OFFSET))(this);
		}

		::System::Void InitWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_INITWIDGET_OFFSET))(this);
		}

		::System::Void InitPartnerCampData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_INITPARTNERCAMPDATA_OFFSET))(this);
		}

		::System::Void OnSelectCampType(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONSELECTCAMPTYPE_OFFSET))(this, index);
		}

		::System::Void SelectedCamp(::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_SELECTEDCAMP_OFFSET))(this, dataIndex);
		}

		::System::Void InitPartnerData(::System::Int32 campID, ::System::Nullable_1<::System::Int32> startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_INITPARTNERDATA_OFFSET))(this, campID, startIndex);
		}

		static ::System::Void BuildPartnerData(::System::Int32 regionID, ::System::Collections::Generic::List_1<::Class_2_CEF0D076577A9E4E*>* list)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_2_CEF0D076577A9E4E*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_BUILDPARTNERDATA_OFFSET))(regionID, list);
		}

		::System::Void SelectedTrustDegreeItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_SELECTEDTRUSTDEGREEITEM_OFFSET))(this, index);
		}

		::System::Void TryReadLastPartnerPopups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_TRYREADLASTPARTNERPOPUPS_OFFSET))(this);
		}

		::System::Void OnWorkBenchDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_ONWORKBENCHDATAUPDATE_OFFSET))(this, args);
		}

		::System::Int32 _OnUIOpen_g__GetCampTypeIndex_6_0(::System::Int32 campType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__ONUIOPEN_G__GETCAMPTYPEINDEX_6_0_OFFSET))(this, campType);
		}

		::System::Int32 _OnUIOpen_g__GetCampIndex_6_1(::System::Int32 campId, ::MoleMole::UIWorkBenchTrustDegreePageController___c__DisplayClass6_0& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::UIWorkBenchTrustDegreePageController___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__ONUIOPEN_G__GETCAMPINDEX_6_1_OFFSET))(this, campId, a2);
		}

		static ::System::Int32 _OnUIOpen_g__GetPartnerIndex_6_2(::System::Int32 campID, ::System::Int32 partnerID)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__ONUIOPEN_G__GETPARTNERINDEX_6_2_OFFSET))(campID, partnerID);
		}

		::System::Void _BindEvent_Button_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER__BINDEVENT_BUTTON_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
