#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContextType; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1F1B55D0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_GET_CONTEXTTYPECLASS_OFFSET UNITYSDK_OFFSET(0x1F1B52E0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_PIPELINECAMERA_CAMERASEQUENCE_ICAMERASEQUENCEBINDINGRESOLVER_RESOLVEDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F1B5930)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_PIPELINECAMERA_CAMERASEQUENCE_ICAMERASEQUENCEBINDINGRESOLVER_RESOLVEEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1F1B57F0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_RESOLVEDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1F1B54B0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_RESOLVEEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1F1B5390)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_SET_CONTEXTTYPECLASS_OFFSET UNITYSDK_OFFSET(0x1F1B5300)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1B5620)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataBindingResolver_TypeDefinitionIndex = 38533;

	class CoreDataBindingResolver : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::PipelineCamera::CameraSequence::CameraSequenceContextType* contextType; // 0x58
		::PipelineCamera::CameraSequence::CoreDataCollection* sequence; // 0x60
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>* externalBinding; // 0x68
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>* dependentBinding; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER__CTOR_OFFSET))(this);
		}

		::System::Type* get_ContextTypeClass()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_GET_CONTEXTTYPECLASS_OFFSET))(this);
		}

		::System::Void set_ContextTypeClass(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_SET_CONTEXTTYPECLASS_OFFSET))(this, value);
		}

		::System::Boolean ResolveExternal(::PipelineCamera::CameraSequence::CameraSequenceCollectionPath& collectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath& contextPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceCollectionPath&, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_RESOLVEEXTERNAL_OFFSET))(this, collectionPath, contextPath);
		}

		::System::Boolean ResolveDependent(::PipelineCamera::CameraSequence::CameraSequenceCollectionPath& collectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath& contextPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceCollectionPath&, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_RESOLVEDEPENDENT_OFFSET))(this, collectionPath, contextPath);
		}

		::System::Type* GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Boolean PipelineCamera_CameraSequence_ICameraSequenceBindingResolver_ResolveExternal(::PipelineCamera::CameraSequence::CameraSequenceCollectionPath& collectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath& contextPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceCollectionPath&, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_PIPELINECAMERA_CAMERASEQUENCE_ICAMERASEQUENCEBINDINGRESOLVER_RESOLVEEXTERNAL_OFFSET))(this, collectionPath, contextPath);
		}

		::System::Boolean PipelineCamera_CameraSequence_ICameraSequenceBindingResolver_ResolveDependent(::PipelineCamera::CameraSequence::CameraSequenceCollectionPath& collectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath& contextPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceCollectionPath&, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_PIPELINECAMERA_CAMERASEQUENCE_ICAMERASEQUENCEBINDINGRESOLVER_RESOLVEDEPENDENT_OFFSET))(this, collectionPath, contextPath);
		}
	};
}
