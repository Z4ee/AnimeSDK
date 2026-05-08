#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSectionGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ICameraSequenceCollection_TypeDefinitionIndex = 36313;

	class ICameraSequenceCollection
	{
	public:
	};
}
