#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvyConnection; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy::Controllers { class SplineController; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONNECTEDCONTROLPOINTSSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5D8F0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int ConnectedControlPointsSelector_TypeDefinitionIndex = 39477;

	class ConnectedControlPointsSelector : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONNECTEDCONTROLPOINTSSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
