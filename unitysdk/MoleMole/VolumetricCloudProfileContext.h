#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"

#define MOLEMOLE_VOLUMETRICCLOUDPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1042B440)

namespace MoleMole
{
	inline static constexpr unsigned int VolumetricCloudProfileContext_TypeDefinitionIndex = 87591;

	class VolumetricCloudProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
