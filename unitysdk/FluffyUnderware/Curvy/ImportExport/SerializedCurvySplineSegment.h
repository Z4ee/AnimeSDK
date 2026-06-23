#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyOrientationSwirl.h"
#include "unitysdk/FluffyUnderware/Curvy/ImportExport/CurvySerializationSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }

#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINESEGMENT_WRITEINTOCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1D22C9D0)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINESEGMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D22C680)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22C600)

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int SerializedCurvySplineSegment_TypeDefinitionIndex = 38933;

	class SerializedCurvySplineSegment : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Rotation; // 0x1C
		::System::Boolean AutoBakeOrientation; // 0x28
		::System::Boolean OrientationAnchor; // 0x29
		::FluffyUnderware::Curvy::CurvyOrientationSwirl Swirl; // 0x2C
		::System::Single SwirlTurns; // 0x30
		::System::Boolean AutoHandles; // 0x34
		::System::Boolean SynchronizeTCB; // 0x35
		::System::Single AutoHandleDistance; // 0x38
		::UnityEngine::Vector3 HandleOut; // 0x3C
		::UnityEngine::Vector3 HandleIn; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINESEGMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::CurvySplineSegment* segment, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINESEGMENT__CTOR_1_OFFSET))(this, segment, space);
		}

		::System::Void WriteIntoControlPoint(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINESEGMENT_WRITEINTOCONTROLPOINT_OFFSET))(this, controlPoint, space);
		}
	};
}
