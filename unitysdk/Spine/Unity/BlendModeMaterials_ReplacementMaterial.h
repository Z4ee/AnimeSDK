#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALS_REPLACEMENTMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B335D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials_ReplacementMaterial_TypeDefinitionIndex = 37794;

	class BlendModeMaterials_ReplacementMaterial : public ::System::Object
	{
	public:
		::System::String* pageName; // 0x10
		::UnityEngine::Material* material; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_REPLACEMENTMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
