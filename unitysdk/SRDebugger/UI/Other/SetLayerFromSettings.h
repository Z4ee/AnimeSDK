#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

#define SRDEBUGGER_UI_OTHER_SETLAYERFROMSETTINGS_START_OFFSET UNITYSDK_OFFSET(0x1ED37A60)
#define SRDEBUGGER_UI_OTHER_SETLAYERFROMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED37AD0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SetLayerFromSettings_TypeDefinitionIndex = 38017;

	class SetLayerFromSettings : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SETLAYERFROMSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SETLAYERFROMSETTINGS_START_OFFSET))(this);
		}
	};
}
