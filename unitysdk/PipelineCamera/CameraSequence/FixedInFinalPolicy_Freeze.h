#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FinalBasicCameraDataChannel.h"
#include "unitysdk/PipelineCamera/CameraSequence/FixedInFinalPolicy.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1EC2C820)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_BEGINCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1EC2CC70)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1EC2CBB0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_LOCATION_OFFSET UNITYSDK_OFFSET(0x1EC2C9C0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EC2CAC0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EC2B750)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1EC2C770)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1EC2C780)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC2CD90)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2CD80)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1EC2CE70)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1EC2CF60)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInFinalPolicy_Freeze_TypeDefinitionIndex = 38558;

	class FixedInFinalPolicy_Freeze : public ::PipelineCamera::CameraSequence::FixedInFinalPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_rotation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInFinalPolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8E20);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_location()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInFinalPolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8E28);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInFinalPolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8E30);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInFinalPolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8E38);
		}
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x40
		::UnityEngine::Vector3 location; // 0x6C
		::UnityEngine::Quaternion rotation; // 0x78
		::System::Single fieldOfView; // 0x88
		::PipelineCamera::CameraSequence::FinalBasicCameraDataChannel overrideChannel; // 0x8C
		::System::Boolean makeContextDependent; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE__CCTOR_OFFSET))();
		}

		::PipelineCamera::FinalCameraData GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::FinalCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_location(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_LOCATION_OFFSET))(this, context);
		}

		::UnityEngine::Quaternion fetch_rotation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_ROTATION_OFFSET))(this, context);
		}

		::System::Single fetch_fieldOfView(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_FIELDOFVIEW_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData fetch_BeginCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE_FETCH_BEGINCAMERADATA_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY_FREEZE___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
