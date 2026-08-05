#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_681BB0E97F9A094A;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam; }
namespace MoleMole { class UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam; }
namespace MoleMole { class UIGalgameArgueHPWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_CREATEHPWIDGETS_OFFSET UNITYSDK_OFFSET(0x18AD0D10)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_ARGUEAVATARNAMEANIM_OFFSET UNITYSDK_OFFSET(0x18AD0220)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_HPTOPROOT_OFFSET UNITYSDK_OFFSET(0x18AD0180)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AD0110)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITNAMEPANEL_OFFSET UNITYSDK_OFFSET(0x18AD1220)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITPANEL_OFFSET UNITYSDK_OFFSET(0x18AD0C80)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AD02C0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18AD0C30)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AD0360)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_REFRESHHPDISPLAY_OFFSET UNITYSDK_OFFSET(0x18AD1150)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETARGUENAMEPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x18AD09D0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETHEALTH_OFFSET UNITYSDK_OFFSET(0x18AD1860)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETHPPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x18AD0760)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETPLAYERNAME_OFFSET UNITYSDK_OFFSET(0x18AD1580)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD18D0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AD19B0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18AD1A50)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AD1AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPPanelWidgetController_TypeDefinitionIndex = 49839;

	class UIGalgameArgueHPPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIGalgameArgueHPWidgetController*>* _hpWidgets; // 0x2C0
		::System::Int32 _maxHealth; // 0x2C8
		::System::Int32 _currentHealth; // 0x2CC
		::System::Boolean _isLeftSide; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_681BB0E97F9A094A* get__viewModel()
		{
			return ((::Class_2_681BB0E97F9A094A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HPTopRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_HPTOPROOT_OFFSET))(this);
		}

		::Class_2_FDFE69FE7B72463B* get_ArgueAvatarNameAnim()
		{
			return ((::Class_2_FDFE69FE7B72463B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_ARGUEAVATARNAMEANIM_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void InitPanel(::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam* panelParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITPANEL_OFFSET))(this, panelParam);
		}

		::System::Void InitNamePanel(::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam* namePanelParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITNAMEPANEL_OFFSET))(this, namePanelParam);
		}

		::System::Void SetPlayerName(::System::String* displayName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETPLAYERNAME_OFFSET))(this, displayName);
		}

		::System::Void SetArgueNamePanelVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETARGUENAMEPANELVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SetHPPanelVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETHPPANELVISIBLE_OFFSET))(this, visible);
		}

		::System::Void CreateHPWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_CREATEHPWIDGETS_OFFSET))(this);
		}

		::System::Void RefreshHPDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_REFRESHHPDISPLAY_OFFSET))(this);
		}

		::System::Void SetHealth(::System::Int32 newHealth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETHEALTH_OFFSET))(this, newHealth);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
