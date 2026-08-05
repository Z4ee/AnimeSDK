#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/UnityEventEx_1.h"

namespace FluffyUnderware::Curvy::Controllers { class CurvyController; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONTROLLEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA6840)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int ControllerEvent_TypeDefinitionIndex = 39559;

	class ControllerEvent : public ::FluffyUnderware::DevTools::UnityEventEx_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONTROLLEREVENT__CTOR_OFFSET))(this);
		}
	};
}
