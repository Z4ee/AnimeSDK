#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/AlphaGeneratorPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DF27A70)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_FETCH_BIAS_OFFSET UNITYSDK_OFFSET(0x1DF27D70)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_FETCH_PERIOD_OFFSET UNITYSDK_OFFSET(0x1DF27C10)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_FETCH_PHASE_OFFSET UNITYSDK_OFFSET(0x1DF27CC0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DF272F0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1DF279C0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_SETPATH_OFFSET UNITYSDK_OFFSET(0x1DF279D0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF27E30)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF27E20)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DF27EE0)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1DF27FD0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_Sinusoidal_TypeDefinitionIndex = 37885;

	class AlphaGeneratorPolicy_Sinusoidal : public ::PipelineCamera::CameraSequence::AlphaGeneratorPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_bias()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal_TypeDefinitionIndex)->GetStaticField(0x8D60);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_period()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal_TypeDefinitionIndex)->GetStaticField(0x8D68);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_phase()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal_TypeDefinitionIndex)->GetStaticField(0x8D70);
		}
		::System::Single period; // 0x40
		::System::Single phase; // 0x44
		::System::Single bias; // 0x48
		::PipelineCamera::CameraSequence::AlphaGeneratorPolicy* alphaPolicy; // 0x50
		::System::Boolean useCache; // 0x58
		::PipelineCamera::SerializableHashString cacheId; // 0x60
		::System::Boolean makeContextDependent; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL__CCTOR_OFFSET))();
		}

		::System::Single GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single sampleTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_GETDATA_OFFSET))(this, time, context, sampleTime);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::System::Single fetch_period(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_FETCH_PERIOD_OFFSET))(this, context);
		}

		::System::Single fetch_phase(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_FETCH_PHASE_OFFSET))(this, context);
		}

		::System::Single fetch_bias(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL_FETCH_BIAS_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
