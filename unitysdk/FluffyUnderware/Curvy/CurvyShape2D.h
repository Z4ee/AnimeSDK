#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape.h"

#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55B890)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyShape2D_TypeDefinitionIndex = 37199;

	class CurvyShape2D : public ::FluffyUnderware::Curvy::CurvyShape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE2D__CTOR_OFFSET))(this);
		}
	};
}
