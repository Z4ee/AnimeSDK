#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine::UI { class VertexHelper; }

#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18428A60)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x18428A40)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x18428A50)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18428A80)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonSubmeshGraphic_TypeDefinitionIndex = 34755;

	class SkeletonSubmeshGraphic : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC__CTOR_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONPOPULATEMESH_OFFSET))(this, vh);
		}
	};
}
