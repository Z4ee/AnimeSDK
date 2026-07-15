#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger { class OptionDefinition; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A2125C0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_CACHERECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A2121D0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1A2123C0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x1A2122A0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A211FC0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A2121C0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A212610)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x1A2124D0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1A2123E0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A212590)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x1A2122B0)
#define SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20D6F0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int OptionsControlBase_TypeDefinitionIndex = 36472;

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

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_OPTIONCONTROL_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_CacheRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_CACHERECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_SelectionModeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_SELECTIONMODEENABLED_OFFSET))(this);
		}

		::System::Void set_SelectionModeEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_SELECTIONMODEENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::Void set_IsChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISCHECKED_OFFSET))(this, a1);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_OPTIONSCONTROLBASE_SET_ISSHOW_OFFSET))(this, a1);
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
