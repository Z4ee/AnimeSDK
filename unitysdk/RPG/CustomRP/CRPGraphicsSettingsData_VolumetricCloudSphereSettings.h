#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICCLOUDSPHERESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1780F480)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_VolumetricCloudSphereSettings_TypeDefinitionIndex = 36122;

	class CRPGraphicsSettingsData_VolumetricCloudSphereSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Int32 Width; // 0x14
		::System::Int32 Height; // 0x18
		::System::Int32 MarchingSteps; // 0x1C
		::System::Single AccumulationFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICCLOUDSPHERESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
