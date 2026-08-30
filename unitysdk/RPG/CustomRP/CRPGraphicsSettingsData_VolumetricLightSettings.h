#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICLIGHTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x192AEDD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_VolumetricLightSettings_TypeDefinitionIndex = 36982;

	class CRPGraphicsSettingsData_VolumetricLightSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Single BilateralWeight; // 0x14
		::System::Single ResolutionScale; // 0x18
		::System::Int32 sortingLayer; // 0x1C
		::System::Int32 orderInLayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICLIGHTSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
