#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyOrientationSwirl.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENTDEFAULTVALUES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55B930)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineSegmentDefaultValues_TypeDefinitionIndex = 37234;

	class CurvySplineSegmentDefaultValues : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_HandleOut()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(CurvySplineSegmentDefaultValues_TypeDefinitionIndex)->GetStaticField(0x8EB0);
		}
		static ::UnityEngine::Vector3* StaticGet_HandleIn()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(CurvySplineSegmentDefaultValues_TypeDefinitionIndex)->GetStaticField(0x8EBC);
		}
		// static const ::FluffyUnderware::Curvy::CurvyOrientationSwirl Swirl; // 0x0
		// static const ::System::Boolean SynchronizeTCB; // 0x0
		// static const ::System::Boolean AutoHandles; // 0x0
		// static const ::System::Single AutoHandleDistance; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENTDEFAULTVALUES__CCTOR_OFFSET))();
		}
	};
}
