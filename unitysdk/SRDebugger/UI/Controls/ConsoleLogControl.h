#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/MihoyoOptionControlType.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace SRDebugger::Services { class IConsoleService; }
namespace SRF::UI::Layout { class VirtualVerticalLayoutGroup; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UI { class ScrollRect; }

#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1844CBF0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_CONSOLEONUPDATED_OFFSET UNITYSDK_OFFSET(0x1844D480)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_ENABLESELECTION_OFFSET UNITYSDK_OFFSET(0x1844CB50)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1844CB90)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWERRORS_OFFSET UNITYSDK_OFFSET(0x1844CAE0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x1844CB30)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWWARNINGS_OFFSET UNITYSDK_OFFSET(0x1844CB10)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1844CE80)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1844D570)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONNAVIENTER_OFFSET UNITYSDK_OFFSET(0x1844D490)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONSELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1844CFB0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x1844D560)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1844D090)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0x1844CE20)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SETISDIRTY_OFFSET UNITYSDK_OFFSET(0x1844CB00)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_ENABLESELECTION_OFFSET UNITYSDK_OFFSET(0x1844CB70)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1844CBA0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWERRORS_OFFSET UNITYSDK_OFFSET(0x1844CAF0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x1844CB40)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWWARNINGS_OFFSET UNITYSDK_OFFSET(0x1844CB20)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1844CDD0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1844D000)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1844D640)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ConsoleLogControl_TypeDefinitionIndex = 29667;

	class ConsoleLogControl : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::SRF::UI::Layout::VirtualVerticalLayoutGroup* _consoleScrollLayoutGroup; // 0x48
		::UnityEngine::UI::ScrollRect* _consoleScrollRect; // 0x50
		::System::Boolean _isDirty; // 0x58
		::System::Nullable_1<::UnityEngine::Vector2> _scrollPosition; // 0x5C
		::System::Boolean _showErrors; // 0x68
		::System::Boolean _showInfo; // 0x69
		::System::Boolean _showWarnings; // 0x6A
		::System::Action_1<::SRDebugger::Services::ConsoleEntry*>* SelectedItemChanged; // 0x70
		::System::String* _filter; // 0x78
		::System::Boolean _NeedNavi; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWERRORS_OFFSET))(this);
		}

		::System::Void set_ShowErrors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWERRORS_OFFSET))(this, value);
		}

		::System::Boolean get_ShowWarnings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWWARNINGS_OFFSET))(this);
		}

		::System::Void set_ShowWarnings(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWWARNINGS_OFFSET))(this, value);
		}

		::System::Boolean get_ShowInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWINFO_OFFSET))(this);
		}

		::System::Void set_ShowInfo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWINFO_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_ENABLESELECTION_OFFSET))(this);
		}

		::System::Void set_EnableSelection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_ENABLESELECTION_OFFSET))(this, value);
		}

		::System::String* get_Filter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_FILTER_OFFSET))(this);
		}

		::System::Void set_Filter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_FILTER_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ScrollToBottom()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SCROLLTOBOTTOM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnSelectedItemChanged(::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONSELECTEDITEMCHANGED_OFFSET))(this, arg0);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_REFRESH_OFFSET))(this);
		}

		::System::Void SetIsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SETISDIRTY_OFFSET))(this);
		}

		::System::Void ConsoleOnUpdated(::SRDebugger::Services::IConsoleService* console)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_CONSOLEONUPDATED_OFFSET))(this, console);
		}

		::System::Void OnNaviEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONNAVIENTER_OFFSET))(this);
		}

		::System::Void OptionControl(::SRDebugger::Services::MihoyoOptionControlType type)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::MihoyoOptionControlType))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_OPTIONCONTROL_OFFSET))(this, type);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONMOVE_OFFSET))(this, eventData);
		}
	};
}
