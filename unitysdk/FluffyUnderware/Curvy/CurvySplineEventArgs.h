#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyEventArgs.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F931280)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineEventArgs_TypeDefinitionIndex = 39636;

	class CurvySplineEventArgs : public ::FluffyUnderware::Curvy::CurvyEventArgs
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* Spline; // 0x20

		::System::Void _ctor(::UnityEngine::MonoBehaviour* sender, ::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINEEVENTARGS__CTOR_OFFSET))(this, sender, spline, data);
		}
	};
}
