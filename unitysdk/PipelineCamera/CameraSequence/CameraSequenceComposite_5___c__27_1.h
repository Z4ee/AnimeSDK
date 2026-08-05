#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class CameraSequenceComposite_5___c__27_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5___c__27_1_TypeDefinitionIndex = 38483;

	template <typename TSequence, typename TSegment, typename TBaseTrack, typename TAdditiveTrack, typename T, typename T1>
	class CameraSequenceComposite_5___c__27_1 : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceComposite_5___c__27_1<TSequence, TSegment, TBaseTrack, TAdditiveTrack, T, T1>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceComposite_5___c__27_1<TSequence, TSegment, TBaseTrack, TAdditiveTrack, T, T1>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c__27_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c__27_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
