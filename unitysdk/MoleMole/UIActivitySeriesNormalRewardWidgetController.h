#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_9101092B035C838D;
class Class_3_BD954AEAE8F1A57B;
namespace MoleMole { class UIActivitySeriesRewardItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1758E040)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1758E0D0)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1758DE50)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1758DFD0)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1758E3C0)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1758E150)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1758E8C0)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER__TAKEREWARD_B__9_0_OFFSET UNITYSDK_OFFSET(0x1758E920)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1758E940)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1758E9D0)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1758EA60)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1758EAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySeriesNormalRewardWidgetController_TypeDefinitionIndex = 64669;

	class UIActivitySeriesNormalRewardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9101092B035C838D* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C8
		::Class_3_BD954AEAE8F1A57B* _task; // 0x2D0
		::System::Action* _callBack; // 0x2D8
		::MoleMole::UIActivitySeriesRewardItemWidgetController* _rewardItemWidgetController; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_TAKEREWARD_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_3_BD954AEAE8F1A57B* task, ::System::Action* takeRewardCallback, ::System::String* tagText)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, task, takeRewardCallback, tagText);
		}

		::System::Void _TakeReward_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER__TAKEREWARD_B__9_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
