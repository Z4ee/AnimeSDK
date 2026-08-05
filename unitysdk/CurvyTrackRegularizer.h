#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TrackClosedMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CURVYTRACKREGULARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89AC50)

inline static constexpr unsigned int CurvyTrackRegularizer_TypeDefinitionIndex = 89134;

class CurvyTrackRegularizer : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* PreviewChildName; // 0x0
	// static const ::System::Single Eps; // 0x0
	::FluffyUnderware::Curvy::CurvySpline* curvySpline; // 0x18
	::TrackClosedMode closedMode; // 0x20
	::System::Single simplifyTolerance; // 0x24
	::System::Single pipeRadius; // 0x28
	::System::Int32 pipeSides; // 0x2C
	::System::Single divPerMeter; // 0x30
	::System::Single uvTileLength; // 0x34
	::System::Boolean reverseUV; // 0x38
	::UnityEngine::Material* pipeMaterial; // 0x40
	::System::String* bakeOutputPath; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVYTRACKREGULARIZER__CTOR_OFFSET))(this);
	}
};
