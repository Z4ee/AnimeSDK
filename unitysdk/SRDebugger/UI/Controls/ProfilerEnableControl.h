#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_START_OFFSET UNITYSDK_OFFSET(0x1A213010)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_TOGGLEPROFILER_OFFSET UNITYSDK_OFFSET(0x1A213550)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATELABELS_OFFSET UNITYSDK_OFFSET(0x1A213280)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A213520)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A213620)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerEnableControl_TypeDefinitionIndex = 36484;

	class ProfilerEnableControl : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Boolean _previousState; // 0x48
		::UnityEngine::UI::Text* ButtonText; // 0x50
		::UnityEngine::UI::Button* EnableButton; // 0x58
		::UnityEngine::UI::Text* Text; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_START_OFFSET))(this);
		}

		::System::Void UpdateLabels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATELABELS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void ToggleProfiler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_TOGGLEPROFILER_OFFSET))(this);
		}
	};
}
