#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICCLOUDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A70750)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_VolumetricCloudSettings_TypeDefinitionIndex = 29286;

	class CRPGraphicsSettingsData_VolumetricCloudSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Boolean UseDownsampleAndReconstruct; // 0x11
		::System::Boolean UseAntiAliasing; // 0x12
		::System::Boolean UseSpatialFilter; // 0x13
		::System::Boolean UseSharpen; // 0x14
		::System::Single TemporalAccumulateFactor; // 0x18
		::System::Single SpatialFilterFactor; // 0x1C
		::System::Single SpatialFilterSize; // 0x20
		::System::Int32 MaxHeight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICCLOUDSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
