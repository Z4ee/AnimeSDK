#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollExpendAbleView.h"

class Class_1_B33BAF81033C55CD;
class Class_2_BB18B5C1205C80C6_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_EXPENDVIEW_OFFSET UNITYSDK_OFFSET(0x18A1F940)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18A1FC90)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONBTNREGIONCLICK_OFFSET UNITYSDK_OFFSET(0x18A1F8E0)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A1FAB0)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18A1FBC0)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A1FB40)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A1F780)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A1FA40)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1FE40)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A1FE50)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18A1FEE0)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A1FEF0)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A1FF80)
#define MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A20010)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssMapDetailInfoRowWidgetController_TypeDefinitionIndex = 76400;

	class UIAbyssMapDetailInfoRowWidgetController : public ::MoleMole::ScrollExpendAbleView
	{
	public:
		::Class_2_BB18B5C1205C80C6_2* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBtnRegionClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONBTNREGIONCLICK_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitView(::System::Boolean bgStyle, ::Class_1_B33BAF81033C55CD* rowData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_B33BAF81033C55CD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this, bgStyle, rowData);
		}

		::System::Void ExpendView(::System::Boolean expend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER_EXPENDVIEW_OFFSET))(this, expend);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSMAPDETAILINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
