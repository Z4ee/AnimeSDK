#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18451F10)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_CACHERECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18451C80)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x18451DE0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x18451D20)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18451AE0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x18451C70)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0x18451FB0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x18451E80)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x18451E00)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x18451EE0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x18451D30)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1844DAF0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int OptionsControlBase_TypeDefinitionIndex = 29670;

	class OptionsControlBase : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Boolean _selectionModeEnabled; // 0x48
		::UnityEngine::UI::Toggle* SelectionModeToggle; // 0x50
		::UnityEngine::UI::Selectable* NaviTarget; // 0x58
		::UnityEngine::RectTransform* _CacheRectTransform; // 0x60
		::System::Action* RefreshOptionCategory; // 0x68
		::SRDebugger::OptionDefinition* Option; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE__CTOR_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_OPTIONCONTROL_OFFSET))(this, type);
		}

		::UnityEngine::RectTransform* get_CacheRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_CACHERECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_SelectionModeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_SELECTIONMODEENABLED_OFFSET))(this);
		}

		::System::Void set_SelectionModeEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_SELECTIONMODEENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSELECTED_OFFSET))(this, value);
		}

		::System::Void set_IsChecked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISCHECKED_OFFSET))(this, value);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSHOW_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_REFRESH_OFFSET))(this);
		}
	};
}
