#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSection; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSectionGraph; }
namespace PipelineCamera::CameraSequence { template <typename T1, typename T2, typename T3, typename T4, typename T5> class CameraSequenceCollection_5___c; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollection_5___c_TypeDefinitionIndex = 36185;

	template <typename TSequence, typename TSegment, typename TTrack, typename TAdditiveTrack, typename T>
	class CameraSequenceCollection_5___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceCollection_5___c<TSequence, TSegment, TTrack, TAdditiveTrack, T>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceCollection_5___c<TSequence, TSegment, TTrack, TAdditiveTrack, T>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*, ::System::UInt64>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceSection*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceSection*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSection*, ::System::UInt64>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceSection*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
