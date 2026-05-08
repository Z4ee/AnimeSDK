#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/SplineProcessor.h"

namespace System { class String; }
namespace UnityEngine { class LineRenderer; }

#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_ENFORCEWORLDSPACEUSAGE_OFFSET UNITYSDK_OFFSET(0x1C0B5150)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_GET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x1C0B4FB0)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C0B5530)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B5140)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B5C60)

namespace FluffyUnderware::Curvy::Components
{
	inline static constexpr unsigned int CurvyLineRenderer_TypeDefinitionIndex = 37251;

	class CurvyLineRenderer : public ::FluffyUnderware::Curvy::SplineProcessor
	{
	public:
		// static const ::System::String* ComponentPath; // 0x0
		::UnityEngine::LineRenderer* cachedLineRenderer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::LineRenderer* get_LineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_GET_LINERENDERER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void EnforceWorldSpaceUsage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_ENFORCEWORLDSPACEUSAGE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYLINERENDERER_REFRESH_OFFSET))(this);
		}
	};
}
