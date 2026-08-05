#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyControlPointEventArgs_ModeEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvySplineEventArgs.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLPOINTEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A6FC0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControlPointEventArgs_TypeDefinitionIndex = 39512;

	class CurvyControlPointEventArgs : public ::FluffyUnderware::Curvy::CurvySplineEventArgs
	{
	public:
		::FluffyUnderware::Curvy::CurvySplineSegment* ControlPoint; // 0x28
		::FluffyUnderware::Curvy::CurvyControlPointEventArgs_ModeEnum Mode; // 0x30

		::System::Void _ctor(::UnityEngine::MonoBehaviour* sender, ::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::CurvySplineSegment* cp, ::FluffyUnderware::Curvy::CurvyControlPointEventArgs_ModeEnum mode, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvyControlPointEventArgs_ModeEnum, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLPOINTEVENTARGS__CTOR_OFFSET))(this, sender, spline, cp, mode, data);
		}
	};
}
