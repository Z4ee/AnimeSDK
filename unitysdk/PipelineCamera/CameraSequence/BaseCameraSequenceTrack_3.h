#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimeTransform.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int BaseCameraSequenceTrack_3_TypeDefinitionIndex = 38531;

	template <typename TSegment, typename TSequence, typename T>
	class BaseCameraSequenceTrack_3 : public ::System::Object
	{
	public:
		::Il2CppArray<TSegment>* segments; // 0x0
	};
}
