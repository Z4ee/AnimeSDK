#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_THREADSAFEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1E9B0570)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_THREADSAFEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0560)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineSegment_ThreadSafeData_TypeDefinitionIndex = 39633;

	class CurvySplineSegment_ThreadSafeData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 ThreadSafePreviousCpLocalPosition; // 0x10
		::UnityEngine::Vector3 ThreadSafeLocalPosition; // 0x1C
		::UnityEngine::Vector3 ThreadSafeNextCpLocalPosition; // 0x28
		::UnityEngine::Quaternion ThreadSafeLocalRotation; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_THREADSAFEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Boolean useFollowUp, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment, ::FluffyUnderware::Curvy::CurvySplineSegment*& nextCP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_THREADSAFEDATA_SET_OFFSET))(this, useFollowUp, curvySplineSegment, nextCP);
		}
	};
}
