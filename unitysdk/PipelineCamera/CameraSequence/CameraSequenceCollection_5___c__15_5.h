#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class CameraSequenceCollection_5___c__15_5; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollection_5___c__15_5_TypeDefinitionIndex = 37788;

	template <typename TSequence, typename TSegment, typename TTrack, typename TAdditiveTrack, typename T, typename T1, typename T2, typename T3, typename T4, typename T5>
	class CameraSequenceCollection_5___c__15_5 : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceCollection_5___c__15_5<TSequence, TSegment, TTrack, TAdditiveTrack, T, T1, T2, T3, T4, T5>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceCollection_5___c__15_5<TSequence, TSegment, TTrack, TAdditiveTrack, T, T1, T2, T3, T4, T5>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c__15_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c__15_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
