#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceSectionEdge; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4CB770)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CB7B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__GETFROMVERTICES_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B4CB7C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__GETTOVERTICES_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B4CB7E0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSectionGraph___c_TypeDefinitionIndex = 36256;

	class CameraSequenceSectionGraph___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSectionGraph___c_TypeDefinitionIndex)->GetStaticField(0x27060);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSectionGraph___c_TypeDefinitionIndex)->GetStaticField(0x27068);
		}
		static ::PipelineCamera::CameraSequence::CameraSequenceSectionGraph___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceSectionGraph___c**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSectionGraph___c_TypeDefinitionIndex)->GetStaticField(0x27070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFromVertices_b__8_0(::PipelineCamera::CameraSequence::CameraSequenceSectionEdge* edge)
		{
			return ((::System::Int32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__GETFROMVERTICES_B__8_0_OFFSET))(this, edge);
		}

		::System::Int32 _GetToVertices_b__9_0(::PipelineCamera::CameraSequence::CameraSequenceSectionEdge* edge)
		{
			return ((::System::Int32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceSectionEdge*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCESECTIONGRAPH___C__GETTOVERTICES_B__9_0_OFFSET))(this, edge);
		}
	};
}
