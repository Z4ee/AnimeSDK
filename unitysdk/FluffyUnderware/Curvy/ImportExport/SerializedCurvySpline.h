#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyInterpolation.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyOrientation.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyUpdateMethod.h"
#include "unitysdk/FluffyUnderware/Curvy/ImportExport/CurvySerializationSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::ImportExport { class SerializedCurvySplineSegment; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINE_WRITEINTOSPLINE_OFFSET UNITYSDK_OFFSET(0x1E0DE940)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DE3A0)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DE300)

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int SerializedCurvySpline_TypeDefinitionIndex = 38932;

	class SerializedCurvySpline : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Vector3 Position; // 0x18
		::UnityEngine::Vector3 Rotation; // 0x24
		::FluffyUnderware::Curvy::CurvyInterpolation Interpolation; // 0x30
		::System::Boolean RestrictTo2D; // 0x34
		::System::Boolean Closed; // 0x35
		::System::Boolean AutoEndTangents; // 0x36
		::FluffyUnderware::Curvy::CurvyOrientation Orientation; // 0x38
		::System::Single AutoHandleDistance; // 0x3C
		::System::Int32 CacheDensity; // 0x40
		::System::Single MaxPointsPerUnit; // 0x44
		::System::Boolean UsePooling; // 0x48
		::System::Boolean UseThreading; // 0x49
		::System::Boolean CheckTransform; // 0x4A
		::FluffyUnderware::Curvy::CurvyUpdateMethod UpdateIn; // 0x4C
		::System::Boolean IsBSplineClamped; // 0x50
		::System::Int32 BSplineDegree; // 0x54
		::Il2CppArray<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySplineSegment*>* ControlPoints; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINE__CTOR_1_OFFSET))(this, spline, space);
		}

		::System::Void WriteIntoSpline(::FluffyUnderware::Curvy::CurvySpline* deserializedSpline, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SERIALIZEDCURVYSPLINE_WRITEINTOSPLINE_OFFSET))(this, deserializedSpline, space);
		}
	};
}
