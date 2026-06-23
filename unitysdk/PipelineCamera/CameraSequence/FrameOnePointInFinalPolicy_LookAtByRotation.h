#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameOnePointInFinalPolicy.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FixedInFinalPolicy; }

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D87A380)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_FETCH_SCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1D87A520)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D879BF0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1D87A2D0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D87A2E0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D87A620)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87A5D0)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D87A680)
#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D87A770)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInFinalPolicy_LookAtByRotation_TypeDefinitionIndex = 37899;

	class FrameOnePointInFinalPolicy_LookAtByRotation : public ::PipelineCamera::CameraSequence::FrameOnePointInFinalPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInFinalPolicy_LookAtByRotation_TypeDefinitionIndex)->GetStaticField(0x8D50);
		}
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* aspectRatio; // 0x40
		::UnityEngine::Vector2 screenOffset; // 0x48
		::PipelineCamera::CameraSequence::FixedInFinalPolicy* finalCameraData; // 0x50
		::System::Boolean makeContextDependent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION__CCTOR_OFFSET))();
		}

		::PipelineCamera::FinalCameraData GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::UnityEngine::Vector3 entityLocation)
		{
			return ((::PipelineCamera::FinalCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_GETDATA_OFFSET))(this, time, context, entityLocation);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector2 fetch_screenOffset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION_FETCH_SCREENOFFSET_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY_LOOKATBYROTATION___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
