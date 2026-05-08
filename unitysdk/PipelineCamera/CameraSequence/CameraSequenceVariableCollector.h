#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_ADDDEPENDENT_OFFSET UNITYSDK_OFFSET(0x99AFA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_ADDEXTERNAL_OFFSET UNITYSDK_OFFSET(0x99AFB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_WITHWORKSPACE_1_OFFSET UNITYSDK_OFFSET(0x99AE90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_WITHWORKSPACE_OFFSET UNITYSDK_OFFSET(0x99ADB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9B78C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x99AD60)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceVariableCollector_TypeDefinitionIndex = 36327;

	struct alignas(8) CameraSequenceVariableCollector
	{
		static ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath* StaticGet_Root()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceVariableCollector_TypeDefinitionIndex)->GetStaticField(0x26F90);
		}
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::System::Reflection::FieldInfo*>* _dependent; // 0x10
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::System::Reflection::FieldInfo*>* _external; // 0x18
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath _workspace; // 0x20

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::System::Reflection::FieldInfo*>* dependent, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::System::Reflection::FieldInfo*>* external, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::System::Reflection::FieldInfo*>*, ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::System::Reflection::FieldInfo*>*, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR__CTOR_OFFSET))(this, dependent, external, workspace);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR__CCTOR_OFFSET))();
		}

		::PipelineCamera::CameraSequence::CameraSequenceVariableCollector WithWorkspace(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath workspace)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceVariableCollector(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_WITHWORKSPACE_OFFSET))(this, workspace);
		}

		/*
		::PipelineCamera::CameraSequence::CameraSequenceVariableCollector WithWorkspace_1(::System::Guid workspace)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceVariableCollector(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_WITHWORKSPACE_1_OFFSET))(this, workspace);
		}
		*/

		/*
		::System::Void AddDependent(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& id, ::System::Reflection::FieldInfo* fieldInfo, ::System::Boolean isRoot)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&, ::System::Reflection::FieldInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_ADDDEPENDENT_OFFSET))(this, id, fieldInfo, isRoot);
		}
		*/

		/*
		::System::Void AddExternal(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& id, ::System::Reflection::FieldInfo* fieldInfo, ::System::Boolean isRoot)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&, ::System::Reflection::FieldInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEVARIABLECOLLECTOR_ADDEXTERNAL_OFFSET))(this, id, fieldInfo, isRoot);
		}
		*/
	};
}
