#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E66F690)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1E66F680)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_NOTIFYMODIFICATION_OFFSET UNITYSDK_OFFSET(0x1E66FA50)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E66F8B0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66FB90)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyMetadataBase_Spline_TypeDefinitionIndex = 38882;

	class CurvyMetadataBase_Spline : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* mSpline; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_GET_SPLINE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void NotifyModification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_NOTIFYMODIFICATION_OFFSET))(this);
		}
	};
}
