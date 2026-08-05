#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_ACD9131A238D8088;
class Class_2_164DA5C42C1FE8BE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A68B30)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16A68C40)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A68BC0)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A688E0)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_SETPHASEDATA_OFFSET UNITYSDK_OFFSET(0x16A68D00)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A69470)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A69480)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16A69510)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A695B0)
#define MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A69640)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideStageRowWidgetController_TypeDefinitionIndex = 46541;

	class UINewbieGuideStageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_164DA5C42C1FE8BE* _view; // 0x2F0
		::Class_1_ACD9131A238D8088* phaseData; // 0x2F8
		::MoleMole::UIItemIconBtnWidgetController* specialIconBtn; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetPhaseData(::Class_1_ACD9131A238D8088* newPhaseData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACD9131A238D8088*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER_SETPHASEDATA_OFFSET))(this, newPhaseData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESTAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
