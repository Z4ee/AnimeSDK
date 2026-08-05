#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FA5DB50)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1FA5DB40)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_NOTIFYMODIFICATION_OFFSET UNITYSDK_OFFSET(0x1FA5DF10)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FA5DD70)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_SPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5E050)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyMetadataBase_Spline_TypeDefinitionIndex = 39567;

	class CurvyMetadataBase_Spline : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Boolean CheckError; // 0x28
		::FluffyUnderware::Curvy::CurvySpline* mSpline; // 0x30

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
