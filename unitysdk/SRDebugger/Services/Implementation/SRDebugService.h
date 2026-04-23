#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class ActionCompleteCallback; }
namespace SRDebugger { class DynamicOptionContainer; }
namespace SRDebugger { class InfoEntry; }
namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger { class PinnedUiCanvasCreated; }
namespace SRDebugger { class Settings; }
namespace SRDebugger { class VisibilityChangedDelegate; }
namespace SRDebugger::Services { class IDebugPanelService; }
namespace SRDebugger::Services { class IDebugTriggerService; }
namespace SRDebugger::Services { class IDockConsoleService; }
namespace SRDebugger::Services { class IOptionsService; }
namespace SRDebugger::Services { class IPinnedUIService; }
namespace SRDebugger::Services { class ISystemInformationService; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x19E7F6F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x19E7F700)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTION_OFFSET UNITYSDK_OFFSET(0x19E7F7A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDSYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x19E7F220)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PANELVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x19E7DCC0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PINNEDUICANVASCREATED_OFFSET UNITYSDK_OFFSET(0x19E7E4D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_CLEARPINNEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x19E80620)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DEBUGPANELSERVICEONVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x19E80650)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DESTROYDEBUGPANEL_OFFSET UNITYSDK_OFFSET(0x19E7F6A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ENABLEWORLDSPACEMODE_OFFSET UNITYSDK_OFFSET(0x19E80730)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_DOCKCONSOLE_OFFSET UNITYSDK_OFFSET(0x19E797E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISDEBUGPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E796B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISPROFILERDOCKED_OFFSET UNITYSDK_OFFSET(0x19E79860)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISTRIGGERENABLED_OFFSET UNITYSDK_OFFSET(0x19E7F120)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x19E7F060)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_HIDEDEBUGPANEL_OFFSET UNITYSDK_OFFSET(0x19E78D50)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINALLOPTIONS_OFFSET UNITYSDK_OFFSET(0x19E7F900)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINOPTION_OFFSET UNITYSDK_OFFSET(0x19E7FF90)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PROMPTENTRYCODE_OFFSET UNITYSDK_OFFSET(0x19E7F4D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x19E7F750)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTION_OFFSET UNITYSDK_OFFSET(0x19E7F880)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PANELVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x19E7E450)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PINNEDUICANVASCREATED_OFFSET UNITYSDK_OFFSET(0x19E7E550)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISPROFILERDOCKED_OFFSET UNITYSDK_OFFSET(0x19E798F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISTRIGGERENABLED_OFFSET UNITYSDK_OFFSET(0x19E7F190)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWBUGREPORTSHEET_OFFSET UNITYSDK_OFFSET(0x19E796E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_1_OFFSET UNITYSDK_OFFSET(0x19E77B20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_OFFSET UNITYSDK_OFFSET(0x19E77B90)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINALLOPTIONS_OFFSET UNITYSDK_OFFSET(0x19E7FC50)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINOPTION_OFFSET UNITYSDK_OFFSET(0x19E802E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7E5D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE__PROMPTENTRYCODE_B__47_0_OFFSET UNITYSDK_OFFSET(0x19E80A50)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___CTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x19E809D0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int SRDebugService_TypeDefinitionIndex = 35452;

	class SRDebugService : public ::System::Object
	{
	public:
		::SRDebugger::Services::IDebugTriggerService* _debugTrigger; // 0x10
		::SRDebugger::VisibilityChangedDelegate* PanelVisibilityChanged; // 0x18
		::SRDebugger::Services::IOptionsService* _optionsService; // 0x20
		::SRDebugger::DynamicOptionContainer* _looseOptionContainer; // 0x28
		::System::Action* _OnClose; // 0x30
		::SRDebugger::PinnedUiCanvasCreated* PinnedUiCanvasCreated; // 0x38
		::SRDebugger::Services::ISystemInformationService* _informationService; // 0x40
		::UnityEngine::RectTransform* _worldSpaceTransform; // 0x48
		::SRDebugger::Services::IDebugPanelService* _debugPanelService; // 0x50
		::SRDebugger::Services::IPinnedUIService* _pinnedUiService; // 0x58
		::System::Boolean _entryCodeEnabled; // 0x60
		::System::Boolean _hasAuthorised; // 0x61
		::System::Nullable_1<::SRDebugger::DefaultTabs> _queuedTab; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE__CTOR_OFFSET))(this);
		}

		::SRDebugger::Services::IDockConsoleService* get_DockConsole()
		{
			return ((::SRDebugger::Services::IDockConsoleService*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_DOCKCONSOLE_OFFSET))(this);
		}

		::System::Void add_PanelVisibilityChanged(::SRDebugger::VisibilityChangedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::VisibilityChangedDelegate*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PANELVISIBILITYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_PanelVisibilityChanged(::SRDebugger::VisibilityChangedDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::VisibilityChangedDelegate*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PANELVISIBILITYCHANGED_OFFSET))(this, value);
		}

		::System::Void add_PinnedUiCanvasCreated(::SRDebugger::PinnedUiCanvasCreated* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinnedUiCanvasCreated*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PINNEDUICANVASCREATED_OFFSET))(this, value);
		}

		::System::Void remove_PinnedUiCanvasCreated(::SRDebugger::PinnedUiCanvasCreated* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinnedUiCanvasCreated*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PINNEDUICANVASCREATED_OFFSET))(this, value);
		}

		::SRDebugger::Settings* get_Settings()
		{
			return ((::SRDebugger::Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_SETTINGS_OFFSET))(this);
		}

		::System::Boolean get_IsDebugPanelVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISDEBUGPANELVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISTRIGGERENABLED_OFFSET))(this);
		}

		::System::Void set_IsTriggerEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISTRIGGERENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsProfilerDocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISPROFILERDOCKED_OFFSET))(this);
		}

		::System::Void set_IsProfilerDocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISPROFILERDOCKED_OFFSET))(this, value);
		}

		::System::Void AddSystemInfo(::SRDebugger::InfoEntry* entry, ::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::InfoEntry*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDSYSTEMINFO_OFFSET))(this, entry, category);
		}

		::System::Void ShowDebugPanel(::System::Boolean requireEntryCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_OFFSET))(this, requireEntryCode);
		}

		::System::Void ShowDebugPanel_1(::SRDebugger::DefaultTabs tab, ::System::Boolean requireEntryCode)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::DefaultTabs, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_1_OFFSET))(this, tab, requireEntryCode);
		}

		::System::Void HideDebugPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_HIDEDEBUGPANEL_OFFSET))(this);
		}

		::System::Void DestroyDebugPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DESTROYDEBUGPANEL_OFFSET))(this);
		}

		::System::Void AddCloseCallBack(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDCLOSECALLBACK_OFFSET))(this, callback);
		}

		::System::Void AddOptionContainer(::System::Object* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTIONCONTAINER_OFFSET))(this, container);
		}

		::System::Void RemoveOptionContainer(::System::Object* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTIONCONTAINER_OFFSET))(this, container);
		}

		::System::Void AddOption(::SRDebugger::OptionDefinition* option)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTION_OFFSET))(this, option);
		}

		::System::Boolean RemoveOption(::SRDebugger::OptionDefinition* option)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTION_OFFSET))(this, option);
		}

		::System::Void PinAllOptions(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINALLOPTIONS_OFFSET))(this, category);
		}

		::System::Void UnpinAllOptions(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINALLOPTIONS_OFFSET))(this, category);
		}

		::System::Void PinOption(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINOPTION_OFFSET))(this, name);
		}

		::System::Void UnpinOption(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINOPTION_OFFSET))(this, name);
		}

		::System::Void ClearPinnedOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_CLEARPINNEDOPTIONS_OFFSET))(this);
		}

		::System::Void ShowBugReportSheet(::SRDebugger::ActionCompleteCallback* onComplete, ::System::Boolean takeScreenshot, ::System::String* descriptionContent)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ActionCompleteCallback*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWBUGREPORTSHEET_OFFSET))(this, onComplete, takeScreenshot, descriptionContent);
		}

		::System::Void DebugPanelServiceOnVisibilityChanged(::SRDebugger::Services::IDebugPanelService* debugPanelService, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IDebugPanelService*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DEBUGPANELSERVICEONVISIBILITYCHANGED_OFFSET))(this, debugPanelService, b);
		}

		::System::Void PromptEntryCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PROMPTENTRYCODE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* EnableWorldSpaceMode()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ENABLEWORLDSPACEMODE_OFFSET))(this);
		}

		::System::Void __ctor_b__19_0(::UnityEngine::RectTransform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___CTOR_B__19_0_OFFSET))(this, transform);
		}

		::System::Void _PromptEntryCode_b__47_0(::System::Boolean entered)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE__PROMPTENTRYCODE_B__47_0_OFFSET))(this, entered);
		}
	};
}
