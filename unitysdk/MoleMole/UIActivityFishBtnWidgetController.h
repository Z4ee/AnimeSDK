#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityFishBtnWidgetController_BtnSource.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_23;
class Class_1_D375C91CCE5D3999;
class Class_2_1FCFE0C0C73DB469;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BCAD00)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BCAD90)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x18BCB350)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18BCAE10)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_SETONBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18BCB690)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCB6E0)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18BCB740)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18BCB7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishBtnWidgetController_TypeDefinitionIndex = 58965;

	class UIActivityFishBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIActivityFishBtnWidgetController_BtnSource _source; // 0x2C0
		::Class_2_1FCFE0C0C73DB469* _view; // 0x2C8
		::System::Action_1<::System::Boolean>* _onBtnShowState; // 0x2D0
		::Class_0_16E4307DCC419505_23* _uiConfig; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean RefreshView(::Class_1_D375C91CCE5D3999* activityBaseData, ::MoleMole::UIActivityFishBtnWidgetController_BtnSource source)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::MoleMole::UIActivityFishBtnWidgetController_BtnSource))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, activityBaseData, source);
		}

		::System::Void RefreshView_1(::System::String* title, ::System::Int64 stamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, title, stamp);
		}

		::System::Void SetOnBtnShowState(::System::Action_1<::System::Boolean>* onBtnShowState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_SETONBTNSHOWSTATE_OFFSET))(this, onBtnShowState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
