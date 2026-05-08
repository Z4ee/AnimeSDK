#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceCollectionPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSection; }
namespace PipelineCamera::CameraSequence { class CameraSequenceSectionGraph; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceSegment; }
namespace PipelineCamera::CameraSequence { template <typename T1, typename T2> class CameraSequenceSegment_2; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Action_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCollection_5_TypeDefinitionIndex = 36176;

	template <typename TSequence, typename TSegment, typename TTrack, typename TAdditiveTrack, typename T>
	class CameraSequenceCollection_5 : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		TTrack baseTrack; // 0x0
		::System::Collections::Generic::List_1<TAdditiveTrack>* additiveTracks; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*>* eventTracks; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceSection*>* sections; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceSectionGraph*>* overriddenGraph; // 0x0
		::System::Single rateScale; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* blendIn; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* blendOut; // 0x0
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>* externalBinding; // 0x0
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceCollectionPath, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath>* dependentBinding; // 0x0
		static ::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>** StaticGet_EventComparison()
		{
			return (::System::Comparison_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollection_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
