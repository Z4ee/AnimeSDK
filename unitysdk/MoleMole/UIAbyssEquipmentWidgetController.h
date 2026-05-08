#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1E593567A8E1895B;
class Class_2_208CC9941471731A_232;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIAbyssS2EquipmentSelectDialogPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16074ED0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16074730)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x16074FE0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16074840)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160747C0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16074470)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHDESCVIEW_OFFSET UNITYSDK_OFFSET(0x16075050)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16074900)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16075340)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16075350)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16075360)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x160753F0)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16075480)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16075520)
#define MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160755B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEquipmentWidgetController_TypeDefinitionIndex = 70411;

	class UIAbyssEquipmentWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1E593567A8E1895B* _view; // 0x2E8
		::System::Int32 _index; // 0x2F0
		::System::Boolean _isSelect; // 0x2F4
		::System::Boolean _isUnlock; // 0x2F5
		::Class_2_E621E51D351EB960* _abyssModel; // 0x2F8
		::Class_2_208CC9941471731A_232* _config; // 0x300
		::MoleMole::UIAbyssS2EquipmentSelectDialogPopWindowController* _selectWindow; // 0x308

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

		::System::Void RefreshView(::Class_2_208CC9941471731A_232* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_232*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSEQUIPMENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, config);
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
