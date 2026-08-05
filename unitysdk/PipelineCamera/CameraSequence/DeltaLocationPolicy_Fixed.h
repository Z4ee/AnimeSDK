#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/DeltaLocationPolicy.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F233940)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_FETCH_OFFSET_OFFSET UNITYSDK_OFFSET(0x1F233AE0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F233720)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_FORWARDOFFSET_OFFSET UNITYSDK_OFFSET(0x1F2335D0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F233890)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_RIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1F233640)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_UPOFFSET_OFFSET UNITYSDK_OFFSET(0x1F2336B0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SETPATH_OFFSET UNITYSDK_OFFSET(0x1F2338A0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SET_FORWARDOFFSET_OFFSET UNITYSDK_OFFSET(0x1F2335E0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SET_RIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1F233650)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SET_UPOFFSET_OFFSET UNITYSDK_OFFSET(0x1F2336C0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F233C10)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F233BF0)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1F233C70)
#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1F233D60)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaLocationPolicy_Fixed_TypeDefinitionIndex = 38554;

	class DeltaLocationPolicy_Fixed : public ::PipelineCamera::CameraSequence::DeltaLocationPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_offset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DeltaLocationPolicy_Fixed_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}
		::UnityEngine::Vector3 offset; // 0x40
		::System::Boolean makeContextDependent; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED__CCTOR_OFFSET))();
		}

		::System::Single get_ForwardOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_FORWARDOFFSET_OFFSET))(this);
		}

		::System::Void set_ForwardOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SET_FORWARDOFFSET_OFFSET))(this, value);
		}

		::System::Single get_RightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_RIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_RightOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SET_RIGHTOFFSET_OFFSET))(this, value);
		}

		::System::Single get_UpOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_UPOFFSET_OFFSET))(this);
		}

		::System::Void set_UpOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SET_UPOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_offset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED_FETCH_OFFSET_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY_FIXED___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
