#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_444818AABEB7D542;
class Class_3_F92F6A6188E34427;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x192F4B00)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192F4B10)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET UNITYSDK_OFFSET(0x192F6A80)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192F4B80)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192F4DD0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192F4C40)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_REFRESHPVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x192F5BD0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x192F68E0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SHOWINVITE_OFFSET UNITYSDK_OFFSET(0x192F6980)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_TRYJOINABPVP_OFFSET UNITYSDK_OFFSET(0x192F6B30)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192F7310)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__ISALLOWSHOWINVITE_B__13_0_OFFSET UNITYSDK_OFFSET(0x192F7320)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x192F7330)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192F73D0)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192F7470)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x192F7480)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController_TypeDefinitionIndex = 56984;

	class UIAutoBattlePrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Boolean _isShowingInvite; // 0x328
		::MoleMole::UIGeneralNewHintWidgetController* _newHint; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_444818AABEB7D542* get__viewModel()
		{
			return ((::Class_2_444818AABEB7D542*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshPVEProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_REFRESHPVEPROGRESS_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void ShowInvite(::Class_3_F92F6A6188E34427* nextInvite, ::System::Action* onAcceptShowAction, ::System::Action* recursiveShowInvite)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F92F6A6188E34427*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_SHOWINVITE_OFFSET))(this, nextInvite, onAcceptShowAction, recursiveShowInvite);
		}

		::System::Boolean IsAllowShowInvite(::System::Action*& onAcceptShowAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET))(this, onAcceptShowAction);
		}

		::System::Boolean TryJoinABPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_TRYJOINABPVP_OFFSET))(this);
		}

		::System::Void _IsAllowShowInvite_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER__ISALLOWSHOWINVITE_B__13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
