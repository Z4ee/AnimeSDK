#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

#define SRDEBUGGER_UI_OTHER_LOADINGSPINNERBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1845AFF0)
#define SRDEBUGGER_UI_OTHER_LOADINGSPINNERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1845B220)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int LoadingSpinnerBehaviour_TypeDefinitionIndex = 29654;

	class LoadingSpinnerBehaviour : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::Single _dt; // 0x48
		::System::Int32 FrameCount; // 0x4C
		::System::Single SpinDuration; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_LOADINGSPINNERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_LOADINGSPINNERBEHAVIOUR_UPDATE_OFFSET))(this);
		}
	};
}
