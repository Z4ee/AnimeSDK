#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeformationQuality.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DEFORMATIONSETTINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16A70680)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_DeformationSettingCollection_TypeDefinitionIndex = 29295;

	class CRPGraphicsSettingsData_DeformationSettingCollection : public ::System::Object
	{
	public:
		::System::Single MaxZExtent; // 0x10
		::System::Boolean EnableFill; // 0x14
		::System::Single FillRate; // 0x18
		::System::Single TessRange; // 0x1C
		::System::Single NeedTessTerrainNodeSize; // 0x20
		::System::Single NoiseTiling; // 0x24
		::System::Single TrailElevation; // 0x28
		::System::Single ElevationNoise; // 0x2C
		::System::Single DepressionNoise; // 0x30
		::System::Boolean CloseDeformationTiling; // 0x34
		::UnityEngine::DeformationQuality DeformationQualitySetting; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DEFORMATIONSETTINGCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
