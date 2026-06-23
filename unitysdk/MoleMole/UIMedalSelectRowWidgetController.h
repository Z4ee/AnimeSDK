#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_2A0117F72708B5DF;
class Class_2_79AE422BA06F6D26_184;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMedalSelectRowWidgetController_Context; }
namespace System { class Object; }

#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISSETGRAY_OFFSET UNITYSDK_OFFSET(0x1714DBA0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1714DB30)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1714DDB0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1714EBE0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1714E060)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONSELECTCHANGE_OFFSET UNITYSDK_OFFSET(0x1714DFC0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1714DE40)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1714DBC0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_SHOWEMPTYCONTENT_OFFSET UNITYSDK_OFFSET(0x1714EAC0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1714EDB0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1714EDC0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1714EE50)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1714EEE0)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1714EF80)
#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1714F010)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalSelectRowWidgetController_TypeDefinitionIndex = 85236;

	class UIMedalSelectRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_184* _view; // 0x2F0
		::MoleMole::UIMedalSelectRowWidgetController_Context* _context; // 0x2F8
		::Class_1_2A0117F72708B5DF* _medalData; // 0x300
		::System::Int32 _scrollViewIndex; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUnselectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISUNSELECTABLE_OFFSET))(this);
		}

		::System::Boolean get_IsSetGray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_GET_ISSETGRAY_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnSelectChange(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONSELECTCHANGE_OFFSET))(this, isSelect);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowEmptyContent(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_SHOWEMPTYCONTENT_OFFSET))(this, isEmpty);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
