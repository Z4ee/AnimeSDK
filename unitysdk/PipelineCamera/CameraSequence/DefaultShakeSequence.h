#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/CameraSequence/DefaultCameraShakeChannel.h"
#include "unitysdk/PipelineCamera/CameraSequence/DefaultCameraShakeTimeAttenuationSharePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AlphaGeneratorPolicy; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class DefaultShakeAttenuationPolicy; }
namespace PipelineCamera::CameraSequence { class DeltaEulerPolicy; }
namespace PipelineCamera::CameraSequence { class DeltaLocationPolicy; }

#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x189DBEF0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_COLLECTTIMEATTENUATION_OFFSET UNITYSDK_OFFSET(0x189D9B40)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x189DA440)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETFORWARDTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D94B0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETPITCHTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D9590)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x189DA3A0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETRIGHTTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D94F0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETROLLTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D9640)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x189DA5A0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x189DA350)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D96A0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETUPTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D9540)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETYAWTIMEATTENUATIONINDEX_OFFSET UNITYSDK_OFFSET(0x189D95E0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x189DA430)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISFORWARDACTIVE_OFFSET UNITYSDK_OFFSET(0x189D9270)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISPITCHACTIVE_OFFSET UNITYSDK_OFFSET(0x189D9390)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISRIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x189D92D0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISROLLACTIVE_OFFSET UNITYSDK_OFFSET(0x189D9450)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISUPACTIVE_OFFSET UNITYSDK_OFFSET(0x189D9330)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISYAWACTIVE_OFFSET UNITYSDK_OFFSET(0x189D93F0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x189DA3F0)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_PROCESSTIMEATTENUATION_OFFSET UNITYSDK_OFFSET(0x189DA060)
#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x189DBF60)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DefaultShakeSequence_TypeDefinitionIndex = 36373;

	class DefaultShakeSequence : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		::PipelineCamera::CameraSequence::DefaultCameraShakeChannel shakeChannel; // 0x18
		::PipelineCamera::CameraSequence::DefaultCameraShakeTimeAttenuationSharePolicy timeAttenuationSharePolicy; // 0x1C
		::System::Single playLength; // 0x20
		::System::Single playRate; // 0x24
		::System::Boolean isLooping; // 0x28
		::System::Boolean normalizeSampleTime; // 0x29
		::PipelineCamera::CameraSequence::DeltaLocationPolicy* deltaLocation; // 0x30
		::PipelineCamera::CameraSequence::DeltaEulerPolicy* deltaEuler; // 0x38
		::PipelineCamera::CameraSequence::DefaultShakeAttenuationPolicy* attenuation; // 0x40
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* forwardTimeAttenuation; // 0x48
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* rightTimeAttenuation; // 0x50
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* upTimeAttenuation; // 0x58
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* pitchTimeAttenuation; // 0x60
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* yawTimeAttenuation; // 0x68
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* rollTimeAttenuation; // 0x70
		::System::Boolean makeContextDependent; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsForwardActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISFORWARDACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsRightActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISRIGHTACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsUpActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISUPACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsPitchActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISPITCHACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsYawActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISYAWACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsRollActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISROLLACTIVE_OFFSET))(this);
		}

		::System::Int32 GetForwardTimeAttenuationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETFORWARDTIMEATTENUATIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetRightTimeAttenuationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETRIGHTTIMEATTENUATIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetUpTimeAttenuationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETUPTIMEATTENUATIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetPitchTimeAttenuationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETPITCHTIMEATTENUATIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetYawTimeAttenuationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETYAWTIMEATTENUATIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetRollTimeAttenuationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETROLLTIMEATTENUATIONINDEX_OFFSET))(this);
		}

		::System::Void GetTimeAttenuationIndex(::System::Span_1<::System::Int32> indices, ::System::Span_1<::System::Boolean> timeAttenuationToCollect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Int32>, ::System::Span_1<::System::Boolean>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETTIMEATTENUATIONINDEX_OFFSET))(this, indices, timeAttenuationToCollect);
		}

		::System::Void CollectTimeAttenuation(::System::Span_1<::System::Single> timeAttenuation, ::System::ReadOnlySpan_1<::System::Boolean> collectChannel, ::System::Single sampleTime, ::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Single>, ::System::ReadOnlySpan_1<::System::Boolean>, ::System::Single, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_COLLECTTIMEATTENUATION_OFFSET))(this, timeAttenuation, collectChannel, sampleTime, time, context);
		}

		::System::Void ProcessTimeAttenuation(::System::ReadOnlySpan_1<::System::Single> timeAttenuation, ::System::ReadOnlySpan_1<::System::Int32> timeAttenuationIndex, ::UnityEngine::Vector3& location, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Single>, ::System::ReadOnlySpan_1<::System::Int32>, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_PROCESSTIMEATTENUATION_OFFSET))(this, timeAttenuation, timeAttenuationIndex, location, euler);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKESEQUENCE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}
	};
}
