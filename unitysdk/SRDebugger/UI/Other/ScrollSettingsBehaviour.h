#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E69D8F0)
#define SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69D9B0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int ScrollSettingsBehaviour_TypeDefinitionIndex = 37323;

	class ScrollSettingsBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single ScrollSensitivity; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR_AWAKE_OFFSET))(this);
		}
	};
}
