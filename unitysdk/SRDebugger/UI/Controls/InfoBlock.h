#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_INFOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E692340)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int InfoBlock_TypeDefinitionIndex = 37332;

	class InfoBlock : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::UI::Text* Content; // 0x48
		::UnityEngine::UI::Text* Title; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_INFOBLOCK__CTOR_OFFSET))(this);
		}
	};
}
