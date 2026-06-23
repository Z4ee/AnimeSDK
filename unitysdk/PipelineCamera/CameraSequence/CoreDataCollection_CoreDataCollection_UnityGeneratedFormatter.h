#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1E1F3EB0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1E1F3EC0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E1F40A0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4240)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4200)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollection_CoreDataCollection_UnityGeneratedFormatter_TypeDefinitionIndex = 37882;

	class CoreDataCollection_CoreDataCollection_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::PipelineCamera::CameraSequence::CoreDataCollection*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>*>**)Il2CppClass::FromTypeDefinitionIndex(CoreDataCollection_CoreDataCollection_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x28C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::PipelineCamera::CameraSequence::CoreDataCollection*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::PipelineCamera::CameraSequence::CoreDataCollection*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CoreDataCollection*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_COREDATACOLLECTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
