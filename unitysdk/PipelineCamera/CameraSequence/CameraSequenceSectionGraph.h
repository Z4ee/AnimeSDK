#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceSectionEdge; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceCollection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_CHECKGRAPHNAME_OFFSET UNITYSDK_OFFSET(0x1DCCC090)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETALLVERTICES_OFFSET UNITYSDK_OFFSET(0x1DCCC000)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETFROMREMAININGVERTICES_OFFSET UNITYSDK_OFFSET(0x1DCCBF70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETFROMVERTICES_OFFSET UNITYSDK_OFFSET(0x1DCCBD10)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETGRAPHNAME_OFFSET UNITYSDK_OFFSET(0x1DCCB790)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DCCBBD0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETSECTIONNAME_OFFSET UNITYSDK_OFFSET(0x1DCCBA40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETTOVERTICES_OFFSET UNITYSDK_OFFSET(0x1DCCBE40)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_LINK_OFFSET UNITYSDK_OFFSET(0x1DCCB800)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_ONEDGECHANGED_OFFSET UNITYSDK_OFFSET(0x1DCCB8C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCC190)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH__LINK_B__4_0_OFFSET UNITYSDK_OFFSET(0x1DCCC210)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSectionGraph_TypeDefinitionIndex = 38524;

	class CameraSequenceSectionGraph : public ::System::Object
	{
	public:
		::PipelineCamera::SerializableHashString graphName; // 0x10
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*>* edges; // 0x20
		::PipelineCamera::CameraSequence::ICameraSequenceCollection* _linedCollection; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FName GetGraphName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETGRAPHNAME_OFFSET))(this);
		}

		::System::Void Link(::PipelineCamera::CameraSequence::ICameraSequenceCollection* collection)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceCollection*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_LINK_OFFSET))(this, collection);
		}

		::System::Void OnEdgeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_ONEDGECHANGED_OFFSET))(this);
		}

		::System::String* GetSectionName(::System::Int32 sectionIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETSECTIONNAME_OFFSET))(this, sectionIndex);
		}

		::System::Int32 GetSectionIndex(::System::String* sectionName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETSECTIONINDEX_OFFSET))(this, sectionName);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* GetFromVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETFROMVERTICES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* GetToVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETTOVERTICES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* GetFromRemainingVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETFROMREMAININGVERTICES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* GetAllVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_GETALLVERTICES_OFFSET))(this);
		}

		::System::Void CheckGraphName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH_CHECKGRAPHNAME_OFFSET))(this);
		}

		::System::Boolean _Link_b__4_0(::PipelineCamera::CameraSequence::CameraSequenceSectionEdge* edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH__LINK_B__4_0_OFFSET))(this, edge);
		}
	};
}
