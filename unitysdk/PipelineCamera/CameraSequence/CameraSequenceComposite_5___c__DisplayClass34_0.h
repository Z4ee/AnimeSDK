#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5___c__DisplayClass34_0_TypeDefinitionIndex = 36215;

	template <typename TSequence, typename TSegment, typename TBaseTrack, typename TAdditiveTrack, typename T>
	class CameraSequenceComposite_5___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector; // 0x0
	};
}
