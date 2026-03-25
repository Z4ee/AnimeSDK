#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger::Services { class IDebugPanelService; }
namespace SRDebugger::UI::Controls { class OptionsControlBase; }
namespace SRDebugger::UI::Controls::Data { class ActionControl; }
namespace SRDebugger::UI::Other { class CategoryGroup; }
namespace SRDebugger::UI::Tabs { class OptionsTabController_CategoryInstance; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18462A80)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_COMMITPINNEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x184619F0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_COMMIT_OFFSET UNITYSDK_OFFSET(0x184619C0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CREATECATEGORY_OFFSET UNITYSDK_OFFSET(0x18463AC0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_GET__ISCOLLECTIONTAB_OFFSET UNITYSDK_OFFSET(0x184622D0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONCATEGORYSELECTIONTOGGLE_OFFSET UNITYSDK_OFFSET(0x18461E30)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18460790)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18460DE0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18460AB0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONNAVIENTER_OFFSET UNITYSDK_OFFSET(0x18464880)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONPINNEDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x18460960)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSELECTIONTOGGLE_OFFSET UNITYSDK_OFFSET(0x18461DD0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x18460AA0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x18464C00)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_PANELONVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x184616C0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_POPULATE_OFFSET UNITYSDK_OFFSET(0x18462C50)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_REFRESHCATEGORYSELECTION_OFFSET UNITYSDK_OFFSET(0x18461760)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x18461410)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_SETSELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x18460EC0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x184602B0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18461360)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ADJUSTCONTENTPOSITION_OFFSET UNITYSDK_OFFSET(0x18464DB0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18465E50)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__COMMITCOLLECTEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x18462CC0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18465D80)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETFIRSTNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x18464B70)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETSORTEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x184633C0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x18462080)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSHOW_OFFSET UNITYSDK_OFFSET(0x18463070)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONNAVICHANGED_OFFSET UNITYSDK_OFFSET(0x18464C30)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONOPTIONSEARCH_OFFSET UNITYSDK_OFFSET(0x18465290)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__POPULATECOROUTINE_OFFSET UNITYSDK_OFFSET(0x184638D0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__POPULATEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x18463930)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETCOLLECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x18462350)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPCATEGORYNAVIGATION_OFFSET UNITYSDK_OFFSET(0x18464430)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPDOWNNAVIGATION_OFFSET UNITYSDK_OFFSET(0x18465190)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPHORIZONTALNAVIGATION_OFFSET UNITYSDK_OFFSET(0x18464A80)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPUPNAVIGATION_OFFSET UNITYSDK_OFFSET(0x18465210)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController_TypeDefinitionIndex = 29636;

	class OptionsTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LocalConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(OptionsTabController_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(OptionsTabController_TypeDefinitionIndex)->GetStaticField(0xB18);
		}
		::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>* _controls; // 0x48
		::System::Collections::Generic::List_1<::SRDebugger::UI::Tabs::OptionsTabController_CategoryInstance*>* _categories; // 0x50
		::System::Collections::Generic::Dictionary_2<::SRDebugger::OptionDefinition*, ::SRDebugger::UI::Controls::OptionsControlBase*>* _options; // 0x58
		::System::Boolean _queueRefresh; // 0x60
		::System::Boolean _selectionModeEnabled; // 0x61
		::UnityEngine::Canvas* _optionCanvas; // 0x68
		::SRDebugger::UI::Controls::Data::ActionControl* ActionControlPrefab; // 0x70
		::SRDebugger::UI::Other::CategoryGroup* CategoryGroupPrefab; // 0x78
		::UnityEngine::RectTransform* ContentContainer; // 0x80
		::UnityEngine::GameObject* NoOptionsNotice; // 0x88
		::UnityEngine::UI::Toggle* PinButton; // 0x90
		::UnityEngine::GameObject* PinPromptSpacer; // 0x98
		::UnityEngine::GameObject* PinPromptText; // 0xA0
		::System::String* OptionKey; // 0xA8
		::UnityEngine::UI::InputField* OptionSearchInput; // 0xB0
		::UnityEngine::UI::Toggle* CollectionButton; // 0xB8
		::System::Boolean _Inited; // 0xC0
		::System::Boolean _NeedUpdated; // 0xC1
		::System::Boolean _isTogglingCategory; // 0xC2
		::System::Boolean _CollectionModeEnabled; // 0xC3
		::System::Boolean _IsAllowCommited; // 0xC4
		::System::Boolean _IsIgnoreCategoryToggle; // 0xC5
		::System::Boolean _EnableFramingPopulate; // 0xC6
		::System::UInt32 _LoadCountEveryFrame; // 0xC8
		::System::Boolean _IsPopulating; // 0xCC
		::UnityEngine::RectTransform* ViewPortRectTransform; // 0xD0
		::SRDebugger::UI::Controls::OptionsControlBase* _LastSelectedOption; // 0xD8
		::System::Boolean _NeedNavi; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnOptionPinnedStateChanged(::SRDebugger::OptionDefinition* optionDefinition, ::System::Boolean isPinned)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONPINNEDSTATECHANGED_OFFSET))(this, optionDefinition, isPinned);
		}

		::System::Void OnOptionsUpdated(::System::Object* sender, ::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSUPDATED_OFFSET))(this, sender, eventArgs);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void PanelOnVisibilityChanged(::SRDebugger::Services::IDebugPanelService* debugPanelService, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IDebugPanelService*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_PANELONVISIBILITYCHANGED_OFFSET))(this, debugPanelService, b);
		}

		::System::Void SetSelectionModeEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_SETSELECTIONMODEENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_COMMIT_OFFSET))(this);
		}

		::System::Void CommitPinnedOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_COMMITPINNEDOPTIONS_OFFSET))(this);
		}

		::System::Void RefreshCategorySelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_REFRESHCATEGORYSELECTION_OFFSET))(this);
		}

		::System::Void OnOptionSelectionToggle(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSELECTIONTOGGLE_OFFSET))(this, selected);
		}

		::System::Void OnCategorySelectionToggle(::SRDebugger::UI::Tabs::OptionsTabController_CategoryInstance* category, ::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Tabs::OptionsTabController_CategoryInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONCATEGORYSELECTIONTOGGLE_OFFSET))(this, category, selected);
		}

		::System::Boolean _IsOptionSelected(::SRDebugger::OptionDefinition* option)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSELECTED_OFFSET))(this, option);
		}

		::System::Boolean get__IsCollectionTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_GET__ISCOLLECTIONTAB_OFFSET))(this);
		}

		::System::Void _SetCollectionModeEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETCOLLECTIONMODEENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void _CommitCollectedOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__COMMITCOLLECTEDOPTIONS_OFFSET))(this);
		}

		::System::Boolean _IsOptionShow(::SRDebugger::OptionDefinition* option)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSHOW_OFFSET))(this, option);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*>* _GetSortedOptions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETSORTEDOPTIONS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _PopulateCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__POPULATECOROUTINE_OFFSET))(this);
		}

		::System::Void _PopulateImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__POPULATEIMMEDIATE_OFFSET))(this);
		}

		::System::Void Populate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_POPULATE_OFFSET))(this);
		}

		::System::Void CreateCategory(::System::String* title, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CREATECATEGORY_OFFSET))(this, title, options);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void OnNaviEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONNAVIENTER_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_OPTIONCONTROL_OFFSET))(this, type);
		}

		::SRDebugger::UI::Controls::OptionsControlBase* _GetFirstNavigationTarget(::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>* list)
		{
			return ((::SRDebugger::UI::Controls::OptionsControlBase*(*)(::PVOID, ::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETFIRSTNAVIGATIONTARGET_OFFSET))(this, list);
		}

		::System::Void _OnNaviChanged(::UnityEngine::EventSystems::AxisEventData* eventData, ::UnityEngine::UI::Selectable* cmp, ::System::Boolean haveNavi)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONNAVICHANGED_OFFSET))(this, eventData, cmp, haveNavi);
		}

		::System::Void _SetupCategoryNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPCATEGORYNAVIGATION_OFFSET))(this);
		}

		::System::Boolean _SetupHorizontalNavigation(::SRDebugger::UI::Controls::OptionsControlBase* Pre, ::SRDebugger::UI::Controls::OptionsControlBase* Cur)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPHORIZONTALNAVIGATION_OFFSET))(this, Pre, Cur);
		}

		::System::Boolean _SetupDownNavigation(::SRDebugger::UI::Controls::OptionsControlBase* Pre, ::SRDebugger::UI::Controls::OptionsControlBase* Cur)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPDOWNNAVIGATION_OFFSET))(this, Pre, Cur);
		}

		::System::Boolean _SetupUpNavigation(::SRDebugger::UI::Controls::OptionsControlBase* Pre, ::SRDebugger::UI::Controls::OptionsControlBase* Cur)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPUPNAVIGATION_OFFSET))(this, Pre, Cur);
		}

		::System::Void _AdjustContentPosition(::SRDebugger::UI::Controls::OptionsControlBase* control)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ADJUSTCONTENTPOSITION_OFFSET))(this, control);
		}

		::System::Void _OnOptionSearch(::System::String* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONOPTIONSEARCH_OFFSET))(this, filter);
		}
	};
}
