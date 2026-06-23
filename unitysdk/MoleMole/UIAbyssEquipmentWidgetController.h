#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1E593567A8E1895B;
class Class_2_208CC9941471731A_716;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIAbyssS2EquipmentSelectDialogPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x12BE9100)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BE89B0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12BE9210)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12BE8AC0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BE8A40)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BE86F0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHDESCVIEW_OFFSET UNITYSDK_OFFSET(0x12BE9280)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12BE8B80)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE9540)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x12BE9550)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BE9560)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12BE95F0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12BE9680)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BE9720)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BE97B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEquipmentWidgetController_TypeDefinitionIndex = 60550;

	class UIAbyssEquipmentWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1E593567A8E1895B* _view; // 0x2F0
		::System::Int32 _index; // 0x2F8
		::System::Boolean _isSelect; // 0x2FC
		::System::Boolean _isUnlock; // 0x2FD
		::Class_2_E621E51D351EB960* _abyssModel; // 0x300
		::Class_2_208CC9941471731A_716* _config; // 0x308
		::MoleMole::UIAbyssS2EquipmentSelectDialogPopWindowController* _selectWindow; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_716* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_716*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, config);
		}

		::System::Void RefreshDescView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHDESCVIEW_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
