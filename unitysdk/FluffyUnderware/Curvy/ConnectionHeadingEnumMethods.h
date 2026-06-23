#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ConnectionHeadingEnum.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }

#define FLUFFYUNDERWARE_CURVY_CONNECTIONHEADINGENUMMETHODS_RESOLVEAUTO_OFFSET UNITYSDK_OFFSET(0x1DC82A00)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int ConnectionHeadingEnumMethods_TypeDefinitionIndex = 38998;

	class ConnectionHeadingEnumMethods : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::ConnectionHeadingEnum ResolveAuto(::FluffyUnderware::Curvy::ConnectionHeadingEnum heading, ::FluffyUnderware::Curvy::CurvySplineSegment* followUp)
		{
			return ((::FluffyUnderware::Curvy::ConnectionHeadingEnum(*)(::FluffyUnderware::Curvy::ConnectionHeadingEnum, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONNECTIONHEADINGENUMMETHODS_RESOLVEAUTO_OFFSET))(heading, followUp);
		}
	};
}
