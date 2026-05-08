#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_11;
class Class_1_1685EC66FBD28897;
class Class_1_47F523CB5C537A8A_1;
class Class_2_79F6D62CE30E3F8E_60;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONCLICKGETBTN_OFFSET UNITYSDK_OFFSET(0x15656690)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15655920)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15655A30)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONTAKERAWARDHANDLE_OFFSET UNITYSDK_OFFSET(0x15656840)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156559B0)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15655760)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_REFRESHBUDDYVIEW_OFFSET UNITYSDK_OFFSET(0x15655AF0)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156568E0)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15656970)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15656A00)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15656AA0)
#define MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15656B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyToplimitDetailsRowWidgetController_TypeDefinitionIndex = 50309;

	class UIBuddyToplimitDetailsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_60* _view; // 0x2E8
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* showList; // 0x2F0
		::MoleMole::UIItemIconBtnSmallWidgetController* _iconBtnSmallWidget; // 0x2F8
		::Class_1_47F523CB5C537A8A_1* detailData; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshBuddyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_REFRESHBUDDYVIEW_OFFSET))(this);
		}

		::System::Void OnClickGetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONCLICKGETBTN_OFFSET))(this);
		}

		::System::Void OnTakeRawardHandle(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER_ONTAKERAWARDHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYTOPLIMITDETAILSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
