#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> class CameraSequenceCollection_5___c__13_7; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollection_5___c__13_7_TypeDefinitionIndex = 36178;

	template <typename TSequence, typename TSegment, typename TTrack, typename TAdditiveTrack, typename T, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class CameraSequenceCollection_5___c__13_7 : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceCollection_5___c__13_7<TSequence, TSegment, TTrack, TAdditiveTrack, T, T1, T2, T3, T4, T5, T6, T7>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceCollection_5___c__13_7<TSequence, TSegment, TTrack, TAdditiveTrack, T, T1, T2, T3, T4, T5, T6, T7>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c__13_7_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c__13_7_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
