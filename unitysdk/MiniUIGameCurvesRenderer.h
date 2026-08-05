#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4E7B8E0B6291DEBC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class UICurveParams;
namespace FluffyUnderware::Curvy::Controllers { class SplineController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define MINIUIGAMECURVESRENDERER_CHANGEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x114442D0)
#define MINIUIGAMECURVESRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11443A70)
#define MINIUIGAMECURVESRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11442DA0)
#define MINIUIGAMECURVESRENDERER_SETUPCURVEMATERIALS_OFFSET UNITYSDK_OFFSET(0x11442DF0)
#define MINIUIGAMECURVESRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11443BC0)
#define MINIUIGAMECURVESRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x11444520)

inline static constexpr unsigned int MiniUIGameCurvesRenderer_TypeDefinitionIndex = 71518;

class MiniUIGameCurvesRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::LineRenderer* lr; // 0x18
	::UnityEngine::GameObject* point; // 0x20
	::Enum_3_4E7B8E0B6291DEBC uiType; // 0x28
	::UnityEngine::Material* curvyMat; // 0x30
	::System::Single overallAlpha; // 0x38
	::System::Boolean enableDetection; // 0x3C
	::System::Single detectionRadius; // 0x40
	::System::Single intensityFactor; // 0x44
	::System::Collections::Generic::List_1<::UICurveParams*>* curveParams; // 0x48
	::UnityEngine::Camera* mainCam; // 0x50
	::System::Boolean initialized; // 0x58
	::Il2CppArray<::UnityEngine::Material*>* matInstances; // 0x60
	::UICurveParams* curveParam; // 0x68
	::UnityEngine::Vector3 screenPosition; // 0x70
	::System::Boolean isForward; // 0x7C
	::FluffyUnderware::Curvy::Controllers::SplineController* sc; // 0x80
	::System::Boolean hasDetection; // 0x88
	::System::Int32 _Color; // 0x8C
	::System::Int32 _WaveFreq; // 0x90
	::System::Int32 _WaveAmp; // 0x94
	::System::Int32 _WavePhase; // 0x98
	::System::Int32 _WaveOffset; // 0x9C
	::System::Int32 _WaveSpeed; // 0xA0
	::System::Int32 _DisplacementIntensity; // 0xA4
	::System::Int32 _DisplacementReverse; // 0xA8
	::System::Int32 _DisplacementRange; // 0xAC
	::System::Int32 _DetectionPosition; // 0xB0
	::System::Int32 _OverallAlpha; // 0xB4
	::System::Int32 _CurveDelta; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIUIGAMECURVESRENDERER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIUIGAMECURVESRENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIUIGAMECURVESRENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIUIGAMECURVESRENDERER_UPDATE_OFFSET))(this);
	}

	::System::Void SetupCurveMaterials()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIUIGAMECURVESRENDERER_SETUPCURVEMATERIALS_OFFSET))(this);
	}

	::System::Void ChangeMoveDirection(::System::Boolean forward)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MINIUIGAMECURVESRENDERER_CHANGEMOVEDIRECTION_OFFSET))(this, forward);
	}
};
