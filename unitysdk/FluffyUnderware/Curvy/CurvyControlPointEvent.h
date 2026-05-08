#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/UnityEventEx_1.h"

namespace FluffyUnderware::Curvy { class CurvyControlPointEventArgs; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLPOINTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1D820)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControlPointEvent_TypeDefinitionIndex = 37210;

	class CurvyControlPointEvent : public ::FluffyUnderware::DevTools::UnityEventEx_1<::FluffyUnderware::Curvy::CurvyControlPointEventArgs*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLPOINTEVENT__CTOR_OFFSET))(this);
		}
	};
}
