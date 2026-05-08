#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AdditiveCameraSequenceTrack_3_TypeDefinitionIndex = 36263;

	template <typename TSegment, typename TSequence, typename T>
	class AdditiveCameraSequenceTrack_3 : public ::System::Object
	{
	public:
		::System::Single startOffset; // 0x0
		::Il2CppArray<TSegment>* segments; // 0x0
	};
}
