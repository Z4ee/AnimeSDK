#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/SplineProcessor.h"

namespace System { class String; }
namespace UnityEngine { class EdgeCollider2D; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINETOEDGECOLLIDER2D_GET_EDGECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1F4954B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINETOEDGECOLLIDER2D_REFRESH_OFFSET UNITYSDK_OFFSET(0x1F495640)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINETOEDGECOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F495DD0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineToEdgeCollider2D_TypeDefinitionIndex = 39643;

	class CurvySplineToEdgeCollider2D : public ::FluffyUnderware::Curvy::SplineProcessor
	{
	public:
		// static const ::System::String* ComponentPath; // 0x0
		::UnityEngine::EdgeCollider2D* cachedEdgeCollider2D; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINETOEDGECOLLIDER2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::EdgeCollider2D* get_EdgeCollider()
		{
			return ((::UnityEngine::EdgeCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINETOEDGECOLLIDER2D_GET_EDGECOLLIDER_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINETOEDGECOLLIDER2D_REFRESH_OFFSET))(this);
		}
	};
}
