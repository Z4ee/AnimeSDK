#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"

#define MOLEMOLE_SHADINGQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1585CE90)

namespace MoleMole
{
	inline static constexpr unsigned int ShadingQualityProfileContext_TypeDefinitionIndex = 48197;

	class ShadingQualityProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality Quality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
