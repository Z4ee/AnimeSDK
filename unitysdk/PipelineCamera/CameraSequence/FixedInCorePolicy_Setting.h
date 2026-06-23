#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FixedInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DAC8230)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1DAC8730)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_OFFSET_OFFSET UNITYSDK_OFFSET(0x1DAC8680)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1DAC83D0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DAC85D0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_ROTATION_OFFSET UNITYSDK_OFFSET(0x1DAC84E0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DAC7C00)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1DAC8180)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_SETPATH_OFFSET UNITYSDK_OFFSET(0x1DAC8190)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAC87F0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC87E0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DAC8900)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1DAC89F0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInCorePolicy_Setting_TypeDefinitionIndex = 37895;

	class FixedInCorePolicy_Setting : public ::PipelineCamera::CameraSequence::FixedInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Setting_TypeDefinitionIndex)->GetStaticField(0x8B60);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pivotLocation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Setting_TypeDefinitionIndex)->GetStaticField(0x8B68);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_rotation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Setting_TypeDefinitionIndex)->GetStaticField(0x8B70);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Setting_TypeDefinitionIndex)->GetStaticField(0x8B78);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_radius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Setting_TypeDefinitionIndex)->GetStaticField(0x8B80);
		}
		::UnityEngine::Vector3 pivotLocation; // 0x40
		::UnityEngine::Quaternion rotation; // 0x4C
		::System::Single radius; // 0x5C
		::UnityEngine::Vector2 offset; // 0x60
		::System::Single fieldOfView; // 0x68
		::System::Boolean makeContextDependent; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING__CCTOR_OFFSET))();
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_pivotLocation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_PIVOTLOCATION_OFFSET))(this, context);
		}

		::UnityEngine::Quaternion fetch_rotation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_ROTATION_OFFSET))(this, context);
		}

		::System::Single fetch_radius(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_RADIUS_OFFSET))(this, context);
		}

		::UnityEngine::Vector2 fetch_offset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_OFFSET_OFFSET))(this, context);
		}

		::System::Single fetch_fieldOfView(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING_FETCH_FIELDOFVIEW_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_SETTING___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
