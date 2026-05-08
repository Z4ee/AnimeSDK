#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEADF60)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEADFA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__SORTEVENTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BEADFB0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventTrack___c_TypeDefinitionIndex = 36228;

	class CameraSequenceEventTrack___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceEventTrack___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceEventTrack___c**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEventTrack___c_TypeDefinitionIndex)->GetStaticField(0x26FE0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Single>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEvent*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEventTrack___c_TypeDefinitionIndex)->GetStaticField(0x26FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Single _SortEvents_b__4_0(::PipelineCamera::CameraSequence::CameraSequenceEvent* item)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEvent*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK___C__SORTEVENTS_B__4_0_OFFSET))(this, item);
		}
	};
}
