#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimeTransform.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_1_TypeDefinitionIndex = 37782;

	template <typename T>
	class CameraSequence_1 : public ::UnityEngine::ScriptableObject
	{
	public:
	};
}
