#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/ConsoleAlignment.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/SRDebugger/PinAlignment.h"
#include "unitysdk/SRDebugger/Settings_TriggerBehaviours.h"
#include "unitysdk/SRDebugger/Settings_TriggerEnableModes.h"
#include "unitysdk/SRDebugger/Settings_UIModes.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace SRDebugger { class Settings_KeyboardShortcut; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define SRDEBUGGER_SETTINGS_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A20B440)
#define SRDEBUGGER_SETTINGS_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1A20BB50)
#define SRDEBUGGER_SETTINGS_GETDEFAULTKEYBOARDSHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1A20B090)
#define SRDEBUGGER_SETTINGS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A20BD40)
#define SRDEBUGGER_SETTINGS_GETORCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A20AFC0)
#define SRDEBUGGER_SETTINGS_GET_APIKEY_OFFSET UNITYSDK_OFFSET(0x1A20B920)
#define SRDEBUGGER_SETTINGS_GET_AUTOMATICALLYSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0x1A20B9F0)
#define SRDEBUGGER_SETTINGS_GET_COLLAPSEDUPLICATELOGENTRIES_OFFSET UNITYSDK_OFFSET(0x1A20B900)
#define SRDEBUGGER_SETTINGS_GET_CONSOLEALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A20B990)
#define SRDEBUGGER_SETTINGS_GET_DEBUGCAMERADEPTH_OFFSET UNITYSDK_OFFSET(0x1A20B8F0)
#define SRDEBUGGER_SETTINGS_GET_DEBUGLAYER_OFFSET UNITYSDK_OFFSET(0x1A20B8E0)
#define SRDEBUGGER_SETTINGS_GET_DEFAULTTAB_OFFSET UNITYSDK_OFFSET(0x1A20B520)
#define SRDEBUGGER_SETTINGS_GET_DISABLEDTABS_OFFSET UNITYSDK_OFFSET(0x1A20B950)
#define SRDEBUGGER_SETTINGS_GET_ENABLEBACKGROUNDTRANSPARENCY_OFFSET UNITYSDK_OFFSET(0x1A20B590)
#define SRDEBUGGER_SETTINGS_GET_ENABLEBUGREPORTER_OFFSET UNITYSDK_OFFSET(0x1A20B930)
#define SRDEBUGGER_SETTINGS_GET_ENABLEBUGREPORTSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1A20B940)
#define SRDEBUGGER_SETTINGS_GET_ENABLEEVENTSYSTEMGENERATION_OFFSET UNITYSDK_OFFSET(0x1A20B9D0)
#define SRDEBUGGER_SETTINGS_GET_ENABLEKEYBOARDSHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1A20B560)
#define SRDEBUGGER_SETTINGS_GET_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1A20B530)
#define SRDEBUGGER_SETTINGS_GET_ENTRYCODE_OFFSET UNITYSDK_OFFSET(0x1A2033E0)
#define SRDEBUGGER_SETTINGS_GET_ERRORNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A20B550)
#define SRDEBUGGER_SETTINGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A1F2C70)
#define SRDEBUGGER_SETTINGS_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1A20B500)
#define SRDEBUGGER_SETTINGS_GET_KEYBOARDESCAPECLOSE_OFFSET UNITYSDK_OFFSET(0x1A20B580)
#define SRDEBUGGER_SETTINGS_GET_KEYBOARDSHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1A20B570)
#define SRDEBUGGER_SETTINGS_GET_MAXIMUMCONSOLEENTRIES_OFFSET UNITYSDK_OFFSET(0x1A20B9B0)
#define SRDEBUGGER_SETTINGS_GET_OPTIONSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A20B980)
#define SRDEBUGGER_SETTINGS_GET_PROFILERALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A20B970)
#define SRDEBUGGER_SETTINGS_GET_REQUIRECODE_OFFSET UNITYSDK_OFFSET(0x1A20B5A0)
#define SRDEBUGGER_SETTINGS_GET_REQUIREENTRYCODEEVERYTIME_OFFSET UNITYSDK_OFFSET(0x1A20B5B0)
#define SRDEBUGGER_SETTINGS_GET_RICHTEXTINCONSOLE_OFFSET UNITYSDK_OFFSET(0x1A20B910)
#define SRDEBUGGER_SETTINGS_GET_TRIGGERBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1A20B540)
#define SRDEBUGGER_SETTINGS_GET_TRIGGERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A20B960)
#define SRDEBUGGER_SETTINGS_GET_UIINPUTMODE_OFFSET UNITYSDK_OFFSET(0x1A20B510)
#define SRDEBUGGER_SETTINGS_GET_UISCALE_OFFSET UNITYSDK_OFFSET(0x1A20BA00)
#define SRDEBUGGER_SETTINGS_GET_UNLOADONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A20BB40)
#define SRDEBUGGER_SETTINGS_GET_USEDEBUGCAMERA_OFFSET UNITYSDK_OFFSET(0x1A20B8D0)
#define SRDEBUGGER_SETTINGS_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A20BAD0)
#define SRDEBUGGER_SETTINGS_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A20B4A0)
#define SRDEBUGGER_SETTINGS_SET_CONSOLEALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A20B9A0)
#define SRDEBUGGER_SETTINGS_SET_ENABLEEVENTSYSTEMGENERATION_OFFSET UNITYSDK_OFFSET(0x1A20B9E0)
#define SRDEBUGGER_SETTINGS_SET_ENTRYCODE_OFFSET UNITYSDK_OFFSET(0x1A20B5C0)
#define SRDEBUGGER_SETTINGS_SET_MAXIMUMCONSOLEENTRIES_OFFSET UNITYSDK_OFFSET(0x1A20B9C0)
#define SRDEBUGGER_SETTINGS_SET_UISCALE_OFFSET UNITYSDK_OFFSET(0x1A20BA10)
#define SRDEBUGGER_SETTINGS_UPGRADEKEYBOARDSHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1A20B1C0)
#define SRDEBUGGER_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20BDF0)

namespace SRDebugger
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 36421;

	class Settings : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::SRDebugger::Settings** StaticGet__instance()
		{
			return (::SRDebugger::Settings**)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x62790);
		}
		// static const ::System::String* ResourcesName; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x18
		::System::Boolean _isEnabled; // 0x20
		::SRDebugger::Settings_UIModes _uiInputMode; // 0x24
		::SRDebugger::DefaultTabs _defaultTab; // 0x28
		::SRDebugger::Settings_TriggerEnableModes _triggerEnableMode; // 0x2C
		::SRDebugger::Settings_TriggerBehaviours _triggerBehaviour; // 0x30
		::System::Boolean _errorNotification; // 0x34
		::System::Boolean _enableKeyboardShortcuts; // 0x35
		::Il2CppArray<::SRDebugger::Settings_KeyboardShortcut*>* _keyboardShortcuts; // 0x38
		::Il2CppArray<::SRDebugger::Settings_KeyboardShortcut*>* _newKeyboardShortcuts; // 0x40
		::System::Boolean _keyboardModifierControl; // 0x48
		::System::Boolean _keyboardModifierAlt; // 0x49
		::System::Boolean _keyboardModifierShift; // 0x4A
		::System::Boolean _keyboardEscapeClose; // 0x4B
		::System::Boolean _enableBackgroundTransparency; // 0x4C
		::System::Boolean _collapseDuplicateLogEntries; // 0x4D
		::System::Boolean _richTextInConsole; // 0x4E
		::System::Boolean _requireEntryCode; // 0x4F
		::System::Boolean _requireEntryCodeEveryTime; // 0x50
		::Il2CppArray<::System::Int32>* _entryCode; // 0x58
		::System::Boolean _useDebugCamera; // 0x60
		::System::Int32 _debugLayer; // 0x64
		::System::Single _debugCameraDepth; // 0x68
		::System::String* _apiKey; // 0x70
		::System::Boolean _enableBugReporter; // 0x78
		::System::Boolean _enableBugReportScreenshot; // 0x79
		::System::Collections::Generic::List_1<::SRDebugger::DefaultTabs>* _disabledTabs; // 0x80
		::SRDebugger::PinAlignment _profilerAlignment; // 0x88
		::SRDebugger::PinAlignment _optionsAlignment; // 0x8C
		::SRDebugger::ConsoleAlignment _consoleAlignment; // 0x90
		::SRDebugger::PinAlignment _triggerPosition; // 0x94
		::System::Int32 _maximumConsoleEntries; // 0x98
		::System::Boolean _enableEventSystemCreation; // 0x9C
		::System::Boolean _automaticShowCursor; // 0x9D
		::System::Single _uiScale; // 0xA0
		::System::Boolean _unloadOnClose; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS__CTOR_OFFSET))(this);
		}

		static ::SRDebugger::Settings* get_Instance()
		{
			return ((::SRDebugger::Settings*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_INSTANCE_OFFSET))();
		}

		static ::Il2CppArray<::SRDebugger::Settings_KeyboardShortcut*>* GetDefaultKeyboardShortcuts()
		{
			return ((::Il2CppArray<::SRDebugger::Settings_KeyboardShortcut*>*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GETDEFAULTKEYBOARDSHORTCUTS_OFFSET))();
		}

		::System::Void UpgradeKeyboardShortcuts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_UPGRADEKEYBOARDSHORTCUTS_OFFSET))(this);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ISENABLED_OFFSET))(this);
		}

		::SRDebugger::Settings_UIModes get_UIInputMode()
		{
			return ((::SRDebugger::Settings_UIModes(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_UIINPUTMODE_OFFSET))(this);
		}

		::SRDebugger::DefaultTabs get_DefaultTab()
		{
			return ((::SRDebugger::DefaultTabs(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_DEFAULTTAB_OFFSET))(this);
		}

		::SRDebugger::Settings_TriggerEnableModes get_EnableTrigger()
		{
			return ((::SRDebugger::Settings_TriggerEnableModes(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENABLETRIGGER_OFFSET))(this);
		}

		::SRDebugger::Settings_TriggerBehaviours get_TriggerBehaviour()
		{
			return ((::SRDebugger::Settings_TriggerBehaviours(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_TRIGGERBEHAVIOUR_OFFSET))(this);
		}

		::System::Boolean get_ErrorNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ERRORNOTIFICATION_OFFSET))(this);
		}

		::System::Boolean get_EnableKeyboardShortcuts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENABLEKEYBOARDSHORTCUTS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::Settings_KeyboardShortcut*>* get_KeyboardShortcuts()
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::Settings_KeyboardShortcut*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_KEYBOARDSHORTCUTS_OFFSET))(this);
		}

		::System::Boolean get_KeyboardEscapeClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_KEYBOARDESCAPECLOSE_OFFSET))(this);
		}

		::System::Boolean get_EnableBackgroundTransparency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENABLEBACKGROUNDTRANSPARENCY_OFFSET))(this);
		}

		::System::Boolean get_RequireCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_REQUIRECODE_OFFSET))(this);
		}

		::System::Boolean get_RequireEntryCodeEveryTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_REQUIREENTRYCODEEVERYTIME_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* get_EntryCode()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENTRYCODE_OFFSET))(this);
		}

		::System::Void set_EntryCode(::System::Collections::Generic::IList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_SET_ENTRYCODE_OFFSET))(this, a1);
		}

		::System::Boolean get_UseDebugCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_USEDEBUGCAMERA_OFFSET))(this);
		}

		::System::Int32 get_DebugLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_DEBUGLAYER_OFFSET))(this);
		}

		::System::Single get_DebugCameraDepth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_DEBUGCAMERADEPTH_OFFSET))(this);
		}

		::System::Boolean get_CollapseDuplicateLogEntries()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_COLLAPSEDUPLICATELOGENTRIES_OFFSET))(this);
		}

		::System::Boolean get_RichTextInConsole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_RICHTEXTINCONSOLE_OFFSET))(this);
		}

		::System::String* get_ApiKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_APIKEY_OFFSET))(this);
		}

		::System::Boolean get_EnableBugReporter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENABLEBUGREPORTER_OFFSET))(this);
		}

		::System::Boolean get_EnableBugReportScreenshot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENABLEBUGREPORTSCREENSHOT_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::SRDebugger::DefaultTabs>* get_DisabledTabs()
		{
			return ((::System::Collections::Generic::IList_1<::SRDebugger::DefaultTabs>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_DISABLEDTABS_OFFSET))(this);
		}

		::SRDebugger::PinAlignment get_TriggerPosition()
		{
			return ((::SRDebugger::PinAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_TRIGGERPOSITION_OFFSET))(this);
		}

		::SRDebugger::PinAlignment get_ProfilerAlignment()
		{
			return ((::SRDebugger::PinAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_PROFILERALIGNMENT_OFFSET))(this);
		}

		::SRDebugger::PinAlignment get_OptionsAlignment()
		{
			return ((::SRDebugger::PinAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_OPTIONSALIGNMENT_OFFSET))(this);
		}

		::SRDebugger::ConsoleAlignment get_ConsoleAlignment()
		{
			return ((::SRDebugger::ConsoleAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_CONSOLEALIGNMENT_OFFSET))(this);
		}

		::System::Void set_ConsoleAlignment(::SRDebugger::ConsoleAlignment a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ConsoleAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_SET_CONSOLEALIGNMENT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaximumConsoleEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_MAXIMUMCONSOLEENTRIES_OFFSET))(this);
		}

		::System::Void set_MaximumConsoleEntries(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_SET_MAXIMUMCONSOLEENTRIES_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableEventSystemGeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_ENABLEEVENTSYSTEMGENERATION_OFFSET))(this);
		}

		::System::Void set_EnableEventSystemGeneration(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_SET_ENABLEEVENTSYSTEMGENERATION_OFFSET))(this, a1);
		}

		::System::Boolean get_AutomaticallyShowCursor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_AUTOMATICALLYSHOWCURSOR_OFFSET))(this);
		}

		::System::Single get_UIScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_UISCALE_OFFSET))(this);
		}

		::System::Void set_UIScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_SET_UISCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_UnloadOnClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GET_UNLOADONCLOSE_OFFSET))(this);
		}

		::System::Void OnPropertyChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_ONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		static ::System::Void ClearCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_CLEARCACHE_OFFSET))();
		}

		static ::SRDebugger::Settings* GetInstance()
		{
			return ((::SRDebugger::Settings*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GETINSTANCE_OFFSET))();
		}

		static ::SRDebugger::Settings* GetOrCreateInstance()
		{
			return ((::SRDebugger::Settings*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_GETORCREATEINSTANCE_OFFSET))();
		}
	};
}
