#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Other { class DockConsoleController; }
namespace SRDebugger::UI::Other { class HandleManager; }
namespace SRF::UI::Layout { class FlowLayoutGroup; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define SRDEBUGGER_UI_OTHER_PINNEDUIROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC6020)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int PinnedUIRoot_TypeDefinitionIndex = 37316;

	class PinnedUIRoot : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::Canvas* Canvas; // 0x48
		::UnityEngine::RectTransform* Container; // 0x50
		::SRDebugger::UI::Other::DockConsoleController* DockConsoleController; // 0x58
		::UnityEngine::GameObject* Options; // 0x60
		::SRF::UI::Layout::FlowLayoutGroup* OptionsLayoutGroup; // 0x68
		::UnityEngine::GameObject* Profiler; // 0x70
		::SRDebugger::UI::Other::HandleManager* ProfilerHandleManager; // 0x78
		::UnityEngine::UI::VerticalLayoutGroup* ProfilerVerticalLayoutGroup; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_PINNEDUIROOT__CTOR_OFFSET))(this);
		}
	};
}
