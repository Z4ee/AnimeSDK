#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"

#define MOLEMOLE_VOLUMETRICFOGPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA8A90)

namespace MoleMole
{
	inline static constexpr unsigned int VolumetricFogProfileContext_TypeDefinitionIndex = 78362;

	class VolumetricFogProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricFogSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICFOGPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
