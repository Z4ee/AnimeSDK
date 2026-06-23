#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceSectionGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GETFROMSECTION_OFFSET UNITYSDK_OFFSET(0x1DD47870)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GETTOSECTION_OFFSET UNITYSDK_OFFSET(0x1DD479B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_FROMSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DD47850)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_FROMSECTION_OFFSET UNITYSDK_OFFSET(0x1DD474D0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_TOSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DD47860)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_TOSECTION_OFFSET UNITYSDK_OFFSET(0x1DD47700)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_LINK_OFFSET UNITYSDK_OFFSET(0x1DD47A40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_SET_FROMSECTION_OFFSET UNITYSDK_OFFSET(0x1DD47560)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_SET_TOSECTION_OFFSET UNITYSDK_OFFSET(0x1DD47790)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD47AA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE__GETFROMSECTION_B__15_0_OFFSET UNITYSDK_OFFSET(0x1DD47AB0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSectionEdge_TypeDefinitionIndex = 37861;

	class CameraSequenceSectionEdge : public ::System::Object
	{
	public:
		// static const ::System::String* EndHolder; // 0x0
		// static const ::System::String* UnlinkedMessage; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceSectionGraph* _linkedGraph; // 0x10
		::System::Int32 fromSectionIndex; // 0x18
		::System::Int32 toSectionIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE__CTOR_OFFSET))(this);
		}

		::System::String* get_FromSection()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_FROMSECTION_OFFSET))(this);
		}

		::System::Void set_FromSection(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_SET_FROMSECTION_OFFSET))(this, value);
		}

		::System::String* get_ToSection()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_TOSECTION_OFFSET))(this);
		}

		::System::Void set_ToSection(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_SET_TOSECTION_OFFSET))(this, value);
		}

		::System::Int32 get_FromSectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_FROMSECTIONINDEX_OFFSET))(this);
		}

		::System::Int32 get_ToSectionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GET_TOSECTIONINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetFromSection()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GETFROMSECTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetToSection()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_GETTOSECTION_OFFSET))(this);
		}

		::System::Boolean Link(::PipelineCamera::CameraSequence::CameraSequenceSectionGraph* graph)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE_LINK_OFFSET))(this, graph);
		}

		::System::String* _GetFromSection_b__15_0(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONEDGE__GETFROMSECTION_B__15_0_OFFSET))(this, index);
		}
	};
}
