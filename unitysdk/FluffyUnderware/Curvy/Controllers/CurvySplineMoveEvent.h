#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/UnityEventEx_1.h"

namespace FluffyUnderware::Curvy::Controllers { class CurvySplineMoveEventArgs; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C361660)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvySplineMoveEvent_TypeDefinitionIndex = 37273;

	class CurvySplineMoveEvent : public ::FluffyUnderware::DevTools::UnityEventEx_1<::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEventArgs*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENT__CTOR_OFFSET))(this);
		}
	};
}
