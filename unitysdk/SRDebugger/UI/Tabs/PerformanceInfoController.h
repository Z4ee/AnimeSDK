#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Controls { class InfoBlock; }
namespace SRF::UI { class FlashGraphic; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_TABS_PERFORMANCEINFOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD076480)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int PerformanceInfoController_TypeDefinitionIndex = 45026;

	class PerformanceInfoController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		// static const ::System::Char Tick; // 0x0
		// static const ::System::Char Cross; // 0x0
		// static const ::System::String* NameColor; // 0x0
		::SRDebugger::UI::Controls::InfoBlock* InfoBlockPrefab; // 0x48
		::UnityEngine::RectTransform* LayoutContainer; // 0x50
		::SRF::UI::FlashGraphic* ToggleButton; // 0x58
		::System::Single UpdateInterval; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PERFORMANCEINFOCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
