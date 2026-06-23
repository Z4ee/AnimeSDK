#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ClickSoundType.h"

namespace MoleMole { class MonoEventTrigger; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIFadeConfig; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UICONTROLLEREXTENSION_CHECKCOLDDOWN_OFFSET UNITYSDK_OFFSET(0x172E08C0)
#define MOLEMOLE_UICONTROLLEREXTENSION_ENABLEMASKCLICK_OFFSET UNITYSDK_OFFSET(0x172DFCC0)
#define MOLEMOLE_UICONTROLLEREXTENSION_GETALLFADEANIMNAMESET_OFFSET UNITYSDK_OFFSET(0x172DFEE0)
#define MOLEMOLE_UICONTROLLEREXTENSION_GETFADEDATA_OFFSET UNITYSDK_OFFSET(0x172DFE90)
#define MOLEMOLE_UICONTROLLEREXTENSION_GETGENERALAUDIOCONFIG_OFFSET UNITYSDK_OFFSET(0x172E0370)
#define MOLEMOLE_UICONTROLLEREXTENSION_GETPLAYMIXDROPDOWN_OFFSET UNITYSDK_OFFSET(0x172DF9B0)
#define MOLEMOLE_UICONTROLLEREXTENSION_ONCLICKMASK_OFFSET UNITYSDK_OFFSET(0x172E0610)
#define MOLEMOLE_UICONTROLLEREXTENSION_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172E0450)
#define MOLEMOLE_UICONTROLLEREXTENSION_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172DFBF0)
#define MOLEMOLE_UICONTROLLEREXTENSION_VALIDATEAUDIOSTATECONFIGS_OFFSET UNITYSDK_OFFSET(0x172DF7C0)
#define MOLEMOLE_UICONTROLLEREXTENSION_VALIDATESTATEGROUP_OFFSET UNITYSDK_OFFSET(0x172DF6B0)
#define MOLEMOLE_UICONTROLLEREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerExtension_TypeDefinitionIndex = 57252;

	class UIControllerExtension : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Boolean maskClick; // 0x58
		::System::Boolean muteMaskSound; // 0x59
		::MoleMole::Config::ConfigSoundActionIntending* maskClickAudioConfig; // 0x60
		::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType clickSoundType; // 0x68
		::System::Int32 clickSoundId; // 0x6C
		::MoleMole::Config::ConfigSoundActionGeneral* audioActionOnShow; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* audioActionShowCondition_LastPageNotIn; // 0x78
		::System::Boolean audioTriggerOnHideBeforeAnim; // 0x80
		::MoleMole::Config::ConfigSoundActionGeneral* audioActionOnHide; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* audioActionHideCondition_NextPageNotIn; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* audioGeneralConfigs; // 0x98
		::System::Int32 audioPlayMix; // 0xA0
		::System::Single audioPlayMixExitDelay; // 0xA4
		::System::Boolean audioNeedSetState; // 0xA8
		::System::String* audioStateGroup; // 0xB0
		::System::String* audioStateValue; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* audioStateConfigs; // 0xC0
		::System::Boolean audioNeedSetOpenClose; // 0xC8
		::System::String* audioOpenClose_Group; // 0xD0
		::MoleMole::Config::ConfigSoundActionGeneral* audioActionOnOpen; // 0xD8
		::MoleMole::Config::ConfigSoundActionGeneral* audioActionOnClose; // 0xE0
		::MoleMole::UIFadeConfig* FadeConfig; // 0xE8
		::MoleMole::MonoEventTrigger* _eventTrigger; // 0xF0
		::MoleMole::UIBaseController* _ownerController; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION__CTOR_OFFSET))(this);
		}

		::System::Boolean ValidateStateGroup(::System::String* stateGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_VALIDATESTATEGROUP_OFFSET))(this, stateGroup);
		}

		::System::Boolean ValidateAudioStateConfigs(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* configs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_VALIDATEAUDIOSTATECONFIGS_OFFSET))(this, configs);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* GetPlayMixDropDown()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_GETPLAYMIXDROPDOWN_OFFSET))(this);
		}

		::System::Void OnUIInit(::MoleMole::UIBaseController* ownerController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_ONUIINIT_OFFSET))(this, ownerController);
		}

		::System::Void EnableMaskClick(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_ENABLEMASKCLICK_OFFSET))(this, enable);
		}

		::MoleMole::UIFadeConfig* GetFadeData(::Enum_3_7A4252233BCEB3A9 uiCtrl)
		{
			return ((::MoleMole::UIFadeConfig*(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_GETFADEDATA_OFFSET))(this, uiCtrl);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetAllFadeAnimNameSet(::Enum_3_7A4252233BCEB3A9 uiCtrl)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_GETALLFADEANIMNAMESET_OFFSET))(this, uiCtrl);
		}

		::MoleMole::Config::ConfigSoundActionGeneral* GetGeneralAudioConfig(::System::String* name)
		{
			return ((::MoleMole::Config::ConfigSoundActionGeneral*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_GETGENERALAUDIOCONFIG_OFFSET))(this, name);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickMask(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_ONCLICKMASK_OFFSET))(this, pointerEventData);
		}

		::System::Boolean CheckColdDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEREXTENSION_CHECKCOLDDOWN_OFFSET))(this);
		}
	};
}
