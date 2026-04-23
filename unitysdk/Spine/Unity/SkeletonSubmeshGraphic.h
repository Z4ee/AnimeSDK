#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine::UI { class VertexHelper; }

#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x19E63710)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x19E636F0)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x19E63700)
#define SPINE_UNITY_SKELETONSUBMESHGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19E63730)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonSubmeshGraphic_TypeDefinitionIndex = 40574;

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
