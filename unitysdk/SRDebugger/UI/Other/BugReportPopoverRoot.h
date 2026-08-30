#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_OTHER_BUGREPORTPOPOVERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6990A0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int BugReportPopoverRoot_TypeDefinitionIndex = 37303;

	class BugReportPopoverRoot : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::CanvasGroup* CanvasGroup; // 0x48
		::UnityEngine::RectTransform* Container; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTPOPOVERROOT__CTOR_OFFSET))(this);
		}
	};
}
