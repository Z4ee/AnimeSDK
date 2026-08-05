#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F0555A0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1F0555B0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1F055740)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0558A0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F055860)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataBindingResolver_CoreDataBindingResolver_UnityGeneratedFormatter_TypeDefinitionIndex = 38534;

	class CoreDataBindingResolver_CoreDataBindingResolver_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::PipelineCamera::CameraSequence::CoreDataBindingResolver*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>**)Il2CppClass::FromTypeDefinitionIndex(CoreDataBindingResolver_CoreDataBindingResolver_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2A680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::PipelineCamera::CameraSequence::CoreDataBindingResolver*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::PipelineCamera::CameraSequence::CoreDataBindingResolver*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataBindingResolver*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATABINDINGRESOLVER_COREDATABINDINGRESOLVER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
