#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/AlphaGeneratorPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B4CA4D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_FETCH_CURVE_OFFSET UNITYSDK_OFFSET(0x1B4CA670)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B4CA2D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B4CA420)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B4CA430)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4CA770)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CA720)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B4CA7D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B4CA8C0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_Curve_TypeDefinitionIndex = 36276;

	class AlphaGeneratorPolicy_Curve : public ::PipelineCamera::CameraSequence::AlphaGeneratorPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_curve()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Curve_TypeDefinitionIndex)->GetStaticField(0x8830);
		}
		::UnityEngine::AnimationCurve* curve; // 0x40
		::System::Boolean makeContextDependent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE__CCTOR_OFFSET))();
		}

		::System::Single GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single sampleTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_GETDATA_OFFSET))(this, time, context, sampleTime);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::AnimationCurve* fetch_curve(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE_FETCH_CURVE_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_CURVE___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
