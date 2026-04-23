#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_CLUSTERLIGHTINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x181138F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_ClusterLightingSettings_TypeDefinitionIndex = 35050;

	class CRPGraphicsSettingsData_ClusterLightingSettings : public ::System::Object
	{
	public:
		::System::Int32 NumClusterX; // 0x10
		::System::Int32 NumClusterY; // 0x14
		::System::Int32 NumClusterZ; // 0x18
		::System::Int32 MaxLightPerCluster; // 0x1C
		::System::Int32 MaxLight; // 0x20
		::System::Single NearPlane; // 0x24
		::System::Single FarPlane; // 0x28
		::System::Single MinAreaPercent; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_CLUSTERLIGHTINGSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
