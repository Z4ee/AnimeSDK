#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyUpdateMethod.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::DevTools { template <typename T> class UnityEventEx_1; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_CALTOLERANCE_OFFSET UNITYSDK_OFFSET(0x1F4A0100)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4A0360)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4A0300)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_GET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F49FA60)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F49FA40)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F49FA80)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4A0320)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F4A02F0)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x1F4A02E0)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F49FAA0)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_SET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F49FA70)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_SET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F49FA50)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F49FA90)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F4A0310)
#define FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A0370)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int NearestSplinePointHelper_TypeDefinitionIndex = 39705;

	class NearestSplinePointHelper : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* _spline; // 0x10
		::UnityEngine::Transform* _targetPosition; // 0x18
		::FluffyUnderware::DevTools::UnityEventEx_1<::UnityEngine::Vector3>* OnUpdated; // 0x20
		::UnityEngine::Transform* _sourcePosition; // 0x28
		::FluffyUnderware::Curvy::CurvyUpdateMethod UpdateIn; // 0x30
		::System::Boolean _nextTimeForceUpdate; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_GET_SPLINE_OFFSET))(this);
		}

		::System::Void set_Spline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_SET_SPLINE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_SourcePosition()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_GET_SOURCEPOSITION_OFFSET))(this);
		}

		::System::Void set_SourcePosition(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_SET_SOURCEPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_TargetPosition()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_SET_TARGETPOSITION_OFFSET))(this, value);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_PROCESS_OFFSET))(this);
		}

		::System::Single CalTolerance(::FluffyUnderware::Curvy::CurvySplineSegment* segment)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_CALTOLERANCE_OFFSET))(this, segment);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_MARKDIRTY_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_NEARESTSPLINEPOINTHELPER_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
