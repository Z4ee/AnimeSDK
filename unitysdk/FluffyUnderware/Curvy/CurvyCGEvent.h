#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/UnityEventEx_1.h"

namespace FluffyUnderware::Curvy { class CurvyCGEventArgs; }

#define FLUFFYUNDERWARE_CURVY_CURVYCGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21DA50)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyCGEvent_TypeDefinitionIndex = 37170;

	class CurvyCGEvent : public ::FluffyUnderware::DevTools::UnityEventEx_1<::FluffyUnderware::Curvy::CurvyCGEventArgs*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCGEVENT__CTOR_OFFSET))(this);
		}
	};
}
