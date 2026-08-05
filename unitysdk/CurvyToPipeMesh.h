#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CURVYTOPIPEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x128BFC20)

inline static constexpr unsigned int CurvyToPipeMesh_TypeDefinitionIndex = 53734;

class CurvyToPipeMesh : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* PreviewChildName; // 0x0
	// static const ::System::String* SpotPreviewChildName; // 0x0
	// static const ::System::String* FlowMaterialPath; // 0x0
	// static const ::System::String* NoFlowMaterialPath; // 0x0
	// static const ::System::String* SlideMaterialPath; // 0x0
	// static const ::System::String* SlideSpotPrefabPath; // 0x0
	::FluffyUnderware::Curvy::CurvySpline* curvySpline; // 0x18
	::System::Single pipeRadius; // 0x20
	::System::Int32 pipeSides; // 0x24
	::System::Single divPerMeter; // 0x28
	::System::Single pipeStart; // 0x2C
	::System::Single pipeMiddle; // 0x30
	::System::Single pipeEnd; // 0x34
	::System::Single uvTileLength; // 0x38
	::System::Boolean reverseUV; // 0x3C
	::System::Boolean enableUvFlow; // 0x3D
	::System::Boolean isSlide; // 0x3E
	::System::Boolean showStartNode; // 0x3F
	::System::Boolean showMiddleNodes; // 0x40
	::System::Boolean showEndNode; // 0x41
	::System::Single slideSpotSize; // 0x44
	::System::Single slideFadeDistance; // 0x48
	::System::Boolean overrideStartFadeDistance; // 0x4C
	::System::Single startFadeDistance; // 0x50
	::System::Boolean overrideMiddleFadeDistance; // 0x54
	::System::Single middleFadeDistance; // 0x58
	::System::Boolean overrideEndFadeDistance; // 0x5C
	::System::Single endFadeDistance; // 0x60
	::UnityEngine::Material* pipeMaterial; // 0x68
	::System::String* bakeOutputPath; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVYTOPIPEMESH__CTOR_OFFSET))(this);
	}
};
