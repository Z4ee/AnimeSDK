#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Point.h"

#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F1740)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyMetadataBase_Point_Empty_TypeDefinitionIndex = 39704;

	class CurvyMetadataBase_Point_Empty : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Point
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_EMPTY__CTOR_OFFSET))(this);
		}
	};
}
