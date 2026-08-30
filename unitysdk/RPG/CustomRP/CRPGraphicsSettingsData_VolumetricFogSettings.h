#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICFOGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x192AEDC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_VolumetricFogSettings_TypeDefinitionIndex = 36980;

	class CRPGraphicsSettingsData_VolumetricFogSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Int32 PixelsPerCell; // 0x14
		::System::Int32 DepthSlices; // 0x18
		::System::Int32 Max3DTextureWidth; // 0x1C
		::System::Int32 Max3DTextureHeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOLUMETRICFOGSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
