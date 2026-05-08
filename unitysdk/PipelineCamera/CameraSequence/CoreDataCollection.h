#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollection_5.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataCollectionAdditiveTrack; }
namespace PipelineCamera::CameraSequence { class CoreDataCollectionSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataCollectionTrack; }
namespace PipelineCamera::CameraSequence { class CoreDataComposite; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1B9CDD00)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9CDE20)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CDDC0)
#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION___BASE_GETCONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x1B9CDF70)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollection_TypeDefinitionIndex = 36273;

	class CoreDataCollection : public ::PipelineCamera::CameraSequence::CameraSequenceCollection_5<::PipelineCamera::CameraSequence::CoreDataComposite*, ::PipelineCamera::CameraSequence::CoreDataCollectionSegment*, ::PipelineCamera::CameraSequence::CoreDataCollectionTrack*, ::PipelineCamera::CameraSequence::CoreDataCollectionAdditiveTrack*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>** StaticGet_ContextTypeName()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CoreDataCollection_TypeDefinitionIndex)->GetStaticField(0x26FD0);
		}
		static ::System::Func_2<::System::String*, ::System::Type*>** StaticGet_GetContextTypeByNameDelegate()
		{
			return (::System::Func_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CoreDataCollection_TypeDefinitionIndex)->GetStaticField(0x26FD8);
		}
		::System::String* contextTypeName; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION__CCTOR_OFFSET))();
		}

		::System::Type* GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION_GETCONTEXTTYPE_OFFSET))(this);
		}

		::System::Type* __base_GetContextType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTION___BASE_GETCONTEXTTYPE_OFFSET))(this);
		}
	};
}
