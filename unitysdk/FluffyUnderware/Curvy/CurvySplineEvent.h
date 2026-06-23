#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/UnityEventEx_1.h"

namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E3D0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineEvent_TypeDefinitionIndex = 38867;

	class CurvySplineEvent : public ::FluffyUnderware::DevTools::UnityEventEx_1<::FluffyUnderware::Curvy::CurvySplineEventArgs*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEEVENT__CTOR_OFFSET))(this);
		}
	};
}
