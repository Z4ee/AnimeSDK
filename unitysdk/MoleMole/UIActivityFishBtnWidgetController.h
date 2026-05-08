#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_22;
class Class_1_D375C91CCE5D3999;
class Class_2_1FCFE0C0C73DB469;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A8F220)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A8F2B0)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x15A8F7E0)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET UNITYSDK_OFFSET(0x15A8FA80)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15A8F330)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_SETONBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x15A8FDC0)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8FE10)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A8FE70)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A8FF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishBtnWidgetController_TypeDefinitionIndex = 65222;

	class UIActivityFishBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1FCFE0C0C73DB469* _view; // 0x2B8
		::System::Action_1<::System::Boolean>* _onBtnShowState; // 0x2C0
		::Class_0_16E4307DCC419505_22* _uiConfig; // 0x2C8

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

		::System::Boolean RefreshView(::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, activityBaseData);
		}

		::System::Boolean RefreshView_1(::Class_0_16E4307DCC419505_22* gachaUiConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, gachaUiConfig);
		}

		::System::Void RefreshView_2(::System::String* title, ::System::Int64 stamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET))(this, title, stamp);
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
