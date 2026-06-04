#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_CRPPOSTPROCESSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB6CA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_CRPPostProcessSettings_TypeDefinitionIndex = 35333;

	class CRPGraphicsSettingsData_CRPPostProcessSettings : public ::System::Object
	{
	public:
		::RPG::CustomRP::Quality DOFQuality; // 0x10
		::RPG::CustomRP::Quality BloomQuality; // 0x14
		::RPG::CustomRP::Quality TAAQuality; // 0x18
		::System::Boolean EnableTAA; // 0x1C
		::System::Boolean EnableFXAA; // 0x1D
		::System::Boolean EnableLensFlare; // 0x1E
		::System::Boolean EnableMetalFXSU; // 0x1F
		::System::Boolean EnableSkillRadialBlur; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_CRPPOSTPROCESSSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
