#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_Enum_3_80E27ADD94893AE1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_TypeDefinitionIndex = 64268;

	struct alignas(8) MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo
	{
		::UnityEngine::Material* sharedMaterial; // 0x10
		::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_Enum_3_80E27ADD94893AE1 shaderAlphaPropertyType; // 0x18
		::System::String* shaderPropertyName; // 0x20
	};
}
