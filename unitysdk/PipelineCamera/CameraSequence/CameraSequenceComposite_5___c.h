#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { template <typename T1, typename T2, typename T3, typename T4, typename T5> class CameraSequenceComposite_5___c; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5___c_TypeDefinitionIndex = 37814;

	template <typename TSequence, typename TSegment, typename TBaseTrack, typename TAdditiveTrack, typename T>
	class CameraSequenceComposite_5___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSequence::CameraSequenceComposite_5___c<TSequence, TSegment, TBaseTrack, TAdditiveTrack, T>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::CameraSequenceComposite_5___c<TSequence, TSegment, TBaseTrack, TAdditiveTrack, T>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<TAdditiveTrack, ::System::Collections::Generic::IEnumerable_1<TSegment>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*, ::System::Collections::Generic::IEnumerable_1<::PipelineCamera::CameraSequence::CameraSequenceEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
