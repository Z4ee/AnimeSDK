#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1BDC03C0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BDBFEA0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_TRIGGERCLEANUP_OFFSET UNITYSDK_OFFSET(0x1BDC0370)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_TRIGGERREFRESH_OFFSET UNITYSDK_OFFSET(0x1BDBFEB0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDC02B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC0420)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerMemoryBlock_TypeDefinitionIndex = 37337;

	class ProfilerMemoryBlock : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Single _lastRefresh; // 0x48
		::UnityEngine::UI::Text* CurrentUsedText; // 0x50
		::UnityEngine::UI::Slider* Slider; // 0x58
		::UnityEngine::UI::Text* TotalAllocatedText; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void TriggerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_TRIGGERREFRESH_OFFSET))(this);
		}

		::System::Void TriggerCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_TRIGGERCLEANUP_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CleanUp()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERMEMORYBLOCK_CLEANUP_OFFSET))(this);
		}
	};
}
