#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMSHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1782FAF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessData_CustomShaderResources_TypeDefinitionIndex = 36226;

	class CustomPostProcessData_CustomShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* uberPostPS; // 0x10
		::UnityEngine::Shader* motionBlurPS; // 0x18
		::UnityEngine::Shader* lut2DBaker; // 0x20
		::UnityEngine::Shader* TaaPS; // 0x28
		::UnityEngine::Shader* FXAA; // 0x30
		::UnityEngine::Shader* SMAA; // 0x38
		::UnityEngine::Shader* LensFlare; // 0x40
		::UnityEngine::Shader* PPPattern; // 0x48
		::UnityEngine::Shader* PPLensGlitch; // 0x50
		::UnityEngine::Shader* PPLensGlitch2; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMSHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
