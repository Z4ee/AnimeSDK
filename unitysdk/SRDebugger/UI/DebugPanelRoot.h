#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::Scripts { class DebuggerTabController; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }

#define SRDEBUGGER_UI_DEBUGPANELROOT_CLOSEANDDESTROY_OFFSET UNITYSDK_OFFSET(0x184571F0)
#define SRDEBUGGER_UI_DEBUGPANELROOT_CLOSE_OFFSET UNITYSDK_OFFSET(0x18457070)
#define SRDEBUGGER_UI_DEBUGPANELROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x18457270)

namespace SRDebugger::UI
{
	inline static constexpr unsigned int DebugPanelRoot_TypeDefinitionIndex = 29629;

	class DebugPanelRoot : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::Canvas* Canvas; // 0x48
		::UnityEngine::CanvasGroup* CanvasGroup; // 0x50
		::SRDebugger::Scripts::DebuggerTabController* TabController; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_DEBUGPANELROOT__CTOR_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_DEBUGPANELROOT_CLOSE_OFFSET))(this);
		}

		::System::Void CloseAndDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_DEBUGPANELROOT_CLOSEANDDESTROY_OFFSET))(this);
		}
	};
}
