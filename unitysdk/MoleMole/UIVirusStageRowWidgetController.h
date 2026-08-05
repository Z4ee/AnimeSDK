#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79AE422BA06F6D26_97;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIVirusStageRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11C23690)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x11C243E0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11C23890)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11C23800)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_READNEW_OFFSET UNITYSDK_OFFSET(0x11C245C0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHANIM_OFFSET UNITYSDK_OFFSET(0x11C24470)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0x11C24720)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHTRACK_OFFSET UNITYSDK_OFFSET(0x11C24B00)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x11C23990)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11C24CA0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__REFRESHWIDGET_B__11_0_OFFSET UNITYSDK_OFFSET(0x11C24CB0)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11C24D70)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x11C24E00)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11C24E90)
#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11C24F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusStageRowWidgetController_TypeDefinitionIndex = 49206;

	class UIVirusStageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_97* _view; // 0x2F0
		::MoleMole::UIVirusStageRowWidgetController_Data* _data; // 0x2F8
		::MoleMole::UIGeneralNewHintWidgetController* _newHintCtrl; // 0x300
		::System::Boolean _lastIsSelect; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this);
		}

		::System::Void RefreshAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHANIM_OFFSET))(this);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void ReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_READNEW_OFFSET))(this);
		}

		::System::Void RefreshTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_REFRESHTRACK_OFFSET))(this);
		}

		::System::Void _RefreshWidget_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER__REFRESHWIDGET_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
