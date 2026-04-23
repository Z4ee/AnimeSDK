#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/PcssSampleQuality.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_PCSSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x181138A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_PcssSettings_TypeDefinitionIndex = 35059;

	class CRPGraphicsSettingsData_PcssSettings : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Single blockerSearchRadius; // 0x14
		::System::Single filterRadius; // 0x18
		::System::Single transitionStartDistance; // 0x1C
		::System::Single transitionEndDistance; // 0x20
		::System::Boolean enablePenumbraRamp; // 0x24
		::UnityEngine::Color rampColor0; // 0x28
		::UnityEngine::Color rampColor1; // 0x38
		::System::Single rampIntensity; // 0x48
		::System::Single rampSizeScale; // 0x4C
		::System::Single resolutionScale; // 0x50
		::UnityEngine::Rendering::PcssSampleQuality sampleQuality; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_PCSSSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
