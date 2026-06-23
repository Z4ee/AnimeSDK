#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FixedInCorePolicy.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataChannel.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DE218D0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_BEGINCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1DE21EA0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1DE21DE0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_OFFSET_OFFSET UNITYSDK_OFFSET(0x1DE21D20)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_PIVOTLOCATION_OFFSET UNITYSDK_OFFSET(0x1DE21A70)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_RADIUS_OFFSET UNITYSDK_OFFSET(0x1DE21C60)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_ROTATION_OFFSET UNITYSDK_OFFSET(0x1DE21B70)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DE20670)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1DE21820)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1DE21830)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE21FC0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE21FB0)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DE22100)
#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1DE221F0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInCorePolicy_Freeze_TypeDefinitionIndex = 37894;

	class FixedInCorePolicy_Freeze : public ::PipelineCamera::CameraSequence::FixedInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x89F0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_radius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x89F8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8A00);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8A08);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_rotation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8A10);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pivotLocation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCorePolicy_Freeze_TypeDefinitionIndex)->GetStaticField(0x8A18);
		}
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x40
		::UnityEngine::Vector3 pivotLocation; // 0x6C
		::UnityEngine::Quaternion rotation; // 0x78
		::System::Single radius; // 0x88
		::UnityEngine::Vector2 offset; // 0x8C
		::System::Single fieldOfView; // 0x94
		::PipelineCamera::Module::WorldBasicCameraDataChannel overrideChannel; // 0x98
		::System::Boolean makeContextDependent; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE__CCTOR_OFFSET))();
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_pivotLocation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_PIVOTLOCATION_OFFSET))(this, context);
		}

		::UnityEngine::Quaternion fetch_rotation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_ROTATION_OFFSET))(this, context);
		}

		::System::Single fetch_radius(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_RADIUS_OFFSET))(this, context);
		}

		::UnityEngine::Vector2 fetch_offset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_OFFSET_OFFSET))(this, context);
		}

		::System::Single fetch_fieldOfView(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_FIELDOFVIEW_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData fetch_BeginCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE_FETCH_BEGINCAMERADATA_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINCOREPOLICY_FREEZE___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
