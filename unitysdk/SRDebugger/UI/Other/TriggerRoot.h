#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Controls { class MultiTapButton; }
namespace SRDebugger::UI::Other { class ErrorNotifier; }
namespace SRF::UI { class LongPressButton; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_OTHER_TRIGGERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1845C990)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int TriggerRoot_TypeDefinitionIndex = 29664;

	class TriggerRoot : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::Canvas* Canvas; // 0x48
		::SRF::UI::LongPressButton* TapHoldButton; // 0x50
		::UnityEngine::RectTransform* TriggerTransform; // 0x58
		::SRDebugger::UI::Other::ErrorNotifier* ErrorNotifier; // 0x60
		::SRDebugger::UI::Controls::MultiTapButton* TripleTapButton; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_TRIGGERROOT__CTOR_OFFSET))(this);
		}
	};
}
