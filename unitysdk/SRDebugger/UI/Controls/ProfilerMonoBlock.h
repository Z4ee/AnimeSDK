#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BDC05E0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_TRIGGERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1BDC0B50)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_TRIGGERREFRESH_OFFSET UNITYSDK_OFFSET(0x1BDC0650)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDC0A90)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC0BC0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerMonoBlock_TypeDefinitionIndex = 37339;

	class ProfilerMonoBlock : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Single _lastRefresh; // 0x48
		::UnityEngine::UI::Text* CurrentUsedText; // 0x50
		::UnityEngine::GameObject* NotSupportedMessage; // 0x58
		::UnityEngine::UI::Slider* Slider; // 0x60
		::UnityEngine::UI::Text* TotalAllocatedText; // 0x68
		::System::Boolean _isSupported; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void TriggerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_TRIGGERREFRESH_OFFSET))(this);
		}

		::System::Void TriggerCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMONOBLOCK_TRIGGERCOLLECTION_OFFSET))(this);
		}
	};
}
