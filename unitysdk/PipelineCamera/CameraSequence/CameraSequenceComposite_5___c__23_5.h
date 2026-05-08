#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class CameraSequenceComposite_5___c__23_5; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5___c__23_5_TypeDefinitionIndex = 36210;

	template <typename TSequence, typename TSegment, typename TBaseTrack, typename TAdditiveTrack, typename T, typename T1, typename T2, typename T3, typename T4, typename T5>
	class CameraSequenceComposite_5___c__23_5 : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceComposite_5___c__23_5<TSequence, TSegment, TBaseTrack, TAdditiveTrack, T, T1, T2, T3, T4, T5>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceComposite_5___c__23_5<TSequence, TSegment, TBaseTrack, TAdditiveTrack, T, T1, T2, T3, T4, T5>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c__23_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c__23_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
