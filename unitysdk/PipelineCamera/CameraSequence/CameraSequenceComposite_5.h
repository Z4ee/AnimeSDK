#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEventOperation.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceTimeTransform.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequence_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEvent; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEventTrack; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceSegment; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Action_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5_TypeDefinitionIndex = 38466;

	template <typename TSequence, typename TSegment, typename TBaseTrack, typename TAdditiveTrack, typename T>
	class CameraSequenceComposite_5 : public ::PipelineCamera::CameraSequence::CameraSequence_1<T>
	{
	public:
		::System::Single playRate; // 0x0
		::System::Boolean isLooping; // 0x0
		TBaseTrack baseTrack; // 0x0
		::System::Collections::Generic::List_1<TAdditiveTrack>* additiveTracks; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventTrack*>* eventTracks; // 0x0
		::System::Boolean makeContextDependent; // 0x0
		static ::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*>** StaticGet_ThreadLocalEventOperationBuffer()
		{
			return (::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::PipelineCamera::CameraSequence::CameraSequenceEventOperation>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
