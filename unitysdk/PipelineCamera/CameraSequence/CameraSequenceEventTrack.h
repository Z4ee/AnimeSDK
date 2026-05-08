#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceSegmentOwner; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_COLLECTEVENTS_OFFSET UNITYSDK_OFFSET(0x1BEADB70)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1BEAD770)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_LINK_OFFSET UNITYSDK_OFFSET(0x1BEADA50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_ONTRACKCHANGED_OFFSET UNITYSDK_OFFSET(0x1BEAD940)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_SORTEVENTS_OFFSET UNITYSDK_OFFSET(0x1BEAD780)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEADEE0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEventTrack_TypeDefinitionIndex = 36227;

	class CameraSequenceEventTrack : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>* events; // 0x10
		::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* _linkedOwner; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>* get_Events()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_GET_EVENTS_OFFSET))(this);
		}

		::System::Void SortEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_SORTEVENTS_OFFSET))(this);
		}

		::System::Void OnTrackChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_ONTRACKCHANGED_OFFSET))(this);
		}

		::System::Void Link(::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner* collection, ::System::Int16 trackId)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceSegmentOwner*, ::System::Int16))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_LINK_OFFSET))(this, collection, trackId);
		}

		::System::Void CollectEvents(::Foundation::Unreal::Interval_1<::System::Single>& timeInterval, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& workspace, ::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>* sequenceEvents)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEEVENTTRACK_COLLECTEVENTS_OFFSET))(this, timeInterval, workspace, sequenceEvents);
		}
	};
}
