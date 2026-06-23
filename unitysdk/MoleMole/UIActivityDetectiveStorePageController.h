#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_5FEDC5C6936DE91D;
class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_298;
class Class_2_208CC9941471731A_843;
class Class_2_971D7994FE0B9574;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_BUILDCHAINROWDATA_OFFSET UNITYSDK_OFFSET(0x17E1B8B0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_FINDINPROGRESSSEASON_OFFSET UNITYSDK_OFFSET(0x17E1AFD0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_INITREWARDBTNGROUP_OFFSET UNITYSDK_OFFSET(0x17E1A9B0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_INITSEASONS_OFFSET UNITYSDK_OFFSET(0x17E18F00)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ISSEASONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17E1AB80)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17E1C160)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E18770)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17E1BE80)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E1BC90)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17E1BF00)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONTABBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17E1B830)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E19F60)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E18800)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E18B80)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x17E1A060)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_RESOLVEDEFAULTTAB_OFFSET UNITYSDK_OFFSET(0x17E19FE0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17E19EC0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1C1B0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E1C1C0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17E1C250)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E1C300)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17E1C330)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E1C3C0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E1C3D0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E1C3E0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17E1C3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveStorePageController_TypeDefinitionIndex = 75485;

	class UIActivityDetectiveStorePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_971D7994FE0B9574* _view; // 0x328
		::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_298*>* _allSeasons; // 0x330
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_298*>* _validSeasons; // 0x338
		::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>* _seasonChainSets; // 0x340
		::System::Int32 _currentSeasonIndex; // 0x348
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* _rewardBtnGroup; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitSeasons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_INITSEASONS_OFFSET))(this);
		}

		::System::Int32 ResolveDefaultTab()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_RESOLVEDEFAULTTAB_OFFSET))(this);
		}

		::System::Int32 FindInProgressSeason()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_FINDINPROGRESSSEASON_OFFSET))(this);
		}

		::System::Boolean IsSeasonCompleted(::System::Int32 seasonIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ISSEASONCOMPLETED_OFFSET))(this, seasonIndex);
		}

		::System::Void OnTabBtnClick(::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONTABBTNCLICK_OFFSET))(this, tabIndex);
		}

		::System::Void RefreshScrollView(::System::Boolean isReturningFromMainPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET))(this, isReturningFromMainPage);
		}

		::Class_1_5FEDC5C6936DE91D* BuildChainRowData(::System::Int32 chainGroupID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_843*>* templates)
		{
			return ((::Class_1_5FEDC5C6936DE91D*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_843*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_BUILDCHAINROWDATA_OFFSET))(this, chainGroupID, templates);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void InitRewardBtnGroup(::Class_1_D375C91CCE5D3999* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_INITREWARDBTNGROUP_OFFSET))(this, activityData);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
