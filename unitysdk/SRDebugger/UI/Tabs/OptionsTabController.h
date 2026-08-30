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

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E6A43E0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_COMMITPINNEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E6A3490)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_COMMIT_OFFSET UNITYSDK_OFFSET(0x1E6A3460)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CREATECATEGORY_OFFSET UNITYSDK_OFFSET(0x1E6A56C0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_GET__ISCOLLECTIONTAB_OFFSET UNITYSDK_OFFSET(0x1E6A3C70)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONCATEGORYSELECTIONTOGGLE_OFFSET UNITYSDK_OFFSET(0x1E6A38D0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E6A22F0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6A2A00)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6A2650)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONNAVIENTER_OFFSET UNITYSDK_OFFSET(0x1E6A64E0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONPINNEDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A2510)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSELECTIONTOGGLE_OFFSET UNITYSDK_OFFSET(0x1E6A3870)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSUPDATED_OFFSET UNITYSDK_OFFSET(0x1E6A2640)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1E6A6840)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_PANELONVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A3210)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_POPULATE_OFFSET UNITYSDK_OFFSET(0x1E6A45B0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_REFRESHCATEGORYSELECTION_OFFSET UNITYSDK_OFFSET(0x1E6A32B0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E6A2F60)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_SETSELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x1E6A2B10)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1E6A1DE0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6A2EB0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ADJUSTCONTENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E6A6B30)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7A50)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__COMMITCOLLECTEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E6A4620)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7980)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETFIRSTNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1E6A67B0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETSORTEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E6A4E20)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x1E6A39C0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSHOW_OFFSET UNITYSDK_OFFSET(0x1E6A4A70)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONNAVICHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A68E0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONOPTIONSEARCH_OFFSET UNITYSDK_OFFSET(0x1E6A6FE0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__POPULATECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E6A54E0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__POPULATEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1E6A5540)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETCOLLECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x1E6A3CF0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPCATEGORYNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1E6A6140)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPDOWNNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1E6A6EE0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPHORIZONTALNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1E6A66C0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPUPNAVIGATION_OFFSET UNITYSDK_OFFSET(0x1E6A6F60)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController_TypeDefinitionIndex = 37297;

	class OptionsTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(OptionsTabController_TypeDefinitionIndex)->GetStaticField(0xDD0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LocalConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(OptionsTabController_TypeDefinitionIndex)->GetStaticField(0xDD8);
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

		::System::Void OnOptionPinnedStateChanged(::SRDebugger::OptionDefinition* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONPINNEDSTATECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void OnOptionsUpdated(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSUPDATED_OFFSET))(this, a1, a2);
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

		::System::Void PanelOnVisibilityChanged(::SRDebugger::Services::IDebugPanelService* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IDebugPanelService*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_PANELONVISIBILITYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void SetSelectionModeEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_SETSELECTIONMODEENABLED_OFFSET))(this, a1);
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

		::System::Void OnOptionSelectionToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONOPTIONSELECTIONTOGGLE_OFFSET))(this, a1);
		}

		::System::Void OnCategorySelectionToggle(::SRDebugger::UI::Tabs::OptionsTabController_CategoryInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Tabs::OptionsTabController_CategoryInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONCATEGORYSELECTIONTOGGLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsOptionSelected(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get__IsCollectionTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_GET__ISCOLLECTIONTAB_OFFSET))(this);
		}

		::System::Void _SetCollectionModeEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETCOLLECTIONMODEENABLED_OFFSET))(this, a1);
		}

		::System::Void _CommitCollectedOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__COMMITCOLLECTEDOPTIONS_OFFSET))(this);
		}

		::System::Boolean _IsOptionShow(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ISOPTIONSHOW_OFFSET))(this, a1);
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

		::System::Void CreateCategory(::System::String* a1, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CREATECATEGORY_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void OnNaviEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_ONNAVIENTER_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_OPTIONCONTROL_OFFSET))(this, a1);
		}

		::SRDebugger::UI::Controls::OptionsControlBase* _GetFirstNavigationTarget(::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>* a1)
		{
			return ((::SRDebugger::UI::Controls::OptionsControlBase*(*)(::PVOID, ::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__GETFIRSTNAVIGATIONTARGET_OFFSET))(this, a1);
		}

		::System::Void _OnNaviChanged(::UnityEngine::EventSystems::AxisEventData* a1, ::UnityEngine::UI::Selectable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONNAVICHANGED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupCategoryNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPCATEGORYNAVIGATION_OFFSET))(this);
		}

		::System::Boolean _SetupHorizontalNavigation(::SRDebugger::UI::Controls::OptionsControlBase* a1, ::SRDebugger::UI::Controls::OptionsControlBase* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPHORIZONTALNAVIGATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean _SetupDownNavigation(::SRDebugger::UI::Controls::OptionsControlBase* a1, ::SRDebugger::UI::Controls::OptionsControlBase* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPDOWNNAVIGATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean _SetupUpNavigation(::SRDebugger::UI::Controls::OptionsControlBase* a1, ::SRDebugger::UI::Controls::OptionsControlBase* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__SETUPUPNAVIGATION_OFFSET))(this, a1, a2);
		}

		::System::Void _AdjustContentPosition(::SRDebugger::UI::Controls::OptionsControlBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Controls::OptionsControlBase*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ADJUSTCONTENTPOSITION_OFFSET))(this, a1);
		}

		::System::Void _OnOptionSearch(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER__ONOPTIONSEARCH_OFFSET))(this, a1);
		}
	};
}
