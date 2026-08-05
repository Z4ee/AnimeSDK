#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceAlphaSampler.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_CHECKEXTERNALVARIABLES_OFFSET UNITYSDK_OFFSET(0x1F154F90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F155060)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F154E70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_GETEXTERNALVARIABLES_OFFSET UNITYSDK_OFFSET(0x1F154F40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F155050)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_SETPATH_OFFSET UNITYSDK_OFFSET(0x1F154FF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1550D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F155120)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1F155210)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCurveAlphaSampler_TypeDefinitionIndex = 38520;

	class CameraSequenceCurveAlphaSampler : public ::PipelineCamera::CameraSequence::CameraSequenceAlphaSampler
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x40
		::System::Boolean normalizedCurveSample; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER__CTOR_OFFSET))(this);
		}

		::System::Single GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single duration)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_GETDATA_OFFSET))(this, time, context, duration);
		}

		::System::Void GetExternalVariables(::System::Collections::Generic::HashSet_1<::System::String*>* variables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_GETEXTERNALVARIABLES_OFFSET))(this, variables);
		}

		::System::Boolean CheckExternalVariables(::PipelineCamera::CameraSequence::CameraSequenceContext* context, ::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::System::String*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_CHECKEXTERNALVARIABLES_OFFSET))(this, context, errorMessage);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_SETPATH_OFFSET))(this, path);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECURVEALPHASAMPLER___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
