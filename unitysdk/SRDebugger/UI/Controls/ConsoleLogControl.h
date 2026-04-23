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

#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E87A10)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_CONSOLEONUPDATED_OFFSET UNITYSDK_OFFSET(0x19E882A0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_ENABLESELECTION_OFFSET UNITYSDK_OFFSET(0x19E87970)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x19E879B0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWERRORS_OFFSET UNITYSDK_OFFSET(0x19E87900)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x19E87950)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_GET_SHOWWARNINGS_OFFSET UNITYSDK_OFFSET(0x19E87930)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19E87CA0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONMOVE_OFFSET UNITYSDK_OFFSET(0x19E88390)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONNAVIENTER_OFFSET UNITYSDK_OFFSET(0x19E882B0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_ONSELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E87DD0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_OPTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x19E88380)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_REFRESH_OFFSET UNITYSDK_OFFSET(0x19E87EB0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SCROLLTOBOTTOM_OFFSET UNITYSDK_OFFSET(0x19E87C40)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SETISDIRTY_OFFSET UNITYSDK_OFFSET(0x19E87920)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_ENABLESELECTION_OFFSET UNITYSDK_OFFSET(0x19E87990)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x19E879C0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWERRORS_OFFSET UNITYSDK_OFFSET(0x19E87910)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x19E87960)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_SET_SHOWWARNINGS_OFFSET UNITYSDK_OFFSET(0x19E87940)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_START_OFFSET UNITYSDK_OFFSET(0x19E87BF0)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E87E20)
#define SRDEBUGGER_UI_CONTROLS_CONSOLELOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E88460)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ConsoleLogControl_TypeDefinitionIndex = 35387;

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
