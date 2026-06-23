#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_Enum_3_7F54E45827304004.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_TypeDefinitionIndex = 58213;

	struct alignas(8) MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo
	{
		::UnityEngine::Material* sharedMaterial; // 0x10
		::MoleMole::MonoCanvasGroupAlphaModifierForParticleSystem_MaterialInfo_Enum_3_7F54E45827304004 shaderAlphaPropertyType; // 0x18
		::System::String* shaderPropertyName; // 0x20
	};
}
