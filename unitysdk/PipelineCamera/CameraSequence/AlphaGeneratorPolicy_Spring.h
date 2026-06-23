#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/AlphaGeneratorPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D830B90)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_FETCH_DAMPING_OFFSET UNITYSDK_OFFSET(0x1D830D30)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_FETCH_INITIALSPEED_OFFSET UNITYSDK_OFFSET(0x1D830DE0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_FETCH_STIFFNESS_OFFSET UNITYSDK_OFFSET(0x1D830E90)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D830070)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1D830AE0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D830AF0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D830F60)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D830F40)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D831010)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D831100)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_Spring_TypeDefinitionIndex = 37887;

	class AlphaGeneratorPolicy_Spring : public ::PipelineCamera::CameraSequence::AlphaGeneratorPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_initialSpeed()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C00);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_stiffness()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C08);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_damping()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Spring_TypeDefinitionIndex)->GetStaticField(0x8C10);
		}
		::System::Single damping; // 0x40
		::System::Single initialSpeed; // 0x44
		::System::Single stiffness; // 0x48
		::System::Boolean useCache; // 0x4C
		::PipelineCamera::SerializableHashString cacheId; // 0x50
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* alphaPolicy; // 0x60
		::System::Boolean makeContextDependent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING__CCTOR_OFFSET))();
		}

		::System::Single GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single sampleTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_GETDATA_OFFSET))(this, time, context, sampleTime);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_damping(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_FETCH_DAMPING_OFFSET))(this, context);
		}

		::System::Single fetch_initialSpeed(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_FETCH_INITIALSPEED_OFFSET))(this, context);
		}

		::System::Single fetch_stiffness(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING_FETCH_STIFFNESS_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
