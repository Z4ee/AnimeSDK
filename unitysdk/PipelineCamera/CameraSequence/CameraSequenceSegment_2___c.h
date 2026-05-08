#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimeTransform.h"
#include "unitysdk/PipelineCamera/Method_LoopInterval.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { template <typename T1, typename T2> class CameraSequenceSegment_2___c; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceSegment_2___c_TypeDefinitionIndex = 36260;

	template <typename TSequence, typename T>
	class CameraSequenceSegment_2___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceSegment_2___c<TSequence, T>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceSegment_2___c<TSequence, T>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceSegment_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
