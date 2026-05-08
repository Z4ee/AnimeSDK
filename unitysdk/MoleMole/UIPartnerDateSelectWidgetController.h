#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_61F297ED27C3382F_12;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIPartnerDateItemWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_GETITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x148593B0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14858BE0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14858E10)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x148592F0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14858EA0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14858B70)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x14858F70)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHSELECTITEM_OFFSET UNITYSDK_OFFSET(0x148595B0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14858FD0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_SETONSELECT_OFFSET UNITYSDK_OFFSET(0x14858F20)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14859830)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x14859890)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x14859910)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14859920)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148599B0)
#define MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14859A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateSelectWidgetController_TypeDefinitionIndex = 73708;

	class UIPartnerDateSelectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61F297ED27C3382F_12* _view; // 0x2B8
		::System::Action_1<::System::Int32>* _onSelectItem; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* _partnerIDs; // 0x2C8
		::System::Int32 _selectIdx; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetOnSelect(::System::Action_1<::System::Int32>* onSelectItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_SETONSELECT_OFFSET))(this, onSelectItem);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::System::Int32>* partnerIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, partnerIDs);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_ONSELECTITEM_OFFSET))(this, index);
		}

		::MoleMole::UIPartnerDateItemWidgetController* GetItemWidget(::System::Int32 idx)
		{
			return ((::MoleMole::UIPartnerDateItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_GETITEMWIDGET_OFFSET))(this, idx);
		}

		::System::Void RefreshSelectItem(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER_REFRESHSELECTITEM_OFFSET))(this, idx);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__7_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_0_OFFSET))(this, reference);
		}

		::System::Void _InitView_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER__INITVIEW_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATESELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
