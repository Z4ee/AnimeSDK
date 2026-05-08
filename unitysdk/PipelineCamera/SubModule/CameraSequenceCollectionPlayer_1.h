#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/SubModule/CameraSequenceCollectionPlayerConfig_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTimestamp; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceCollectionInstance; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceBindingResolver; }
namespace PipelineCamera::CameraSequence { template <typename T> class ICameraSequenceCollection_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraSequenceCollectionPlayer_1_TypeDefinitionIndex = 36421;

	template <typename T>
	class CameraSequenceCollectionPlayer_1 : public ::System::Object
	{
	public:
		::System::Int32 _priority; // 0x0
		::Foundation::Unreal::FName _debugName; // 0x0
		::PipelineCamera::ICameraTimestamp* _timestamp; // 0x0
		::System::Int32 _activeChannel; // 0x0
		::System::Func_4<T, T, ::System::Int32, T>* _maskFunction; // 0x0
		::PipelineCamera::CameraSequence::ICameraSequenceCollection_1<T>* _currentCollection; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceCollectionInstance* _currentInstance; // 0x0
		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* _blendSetting; // 0x0
		::System::Collections::Generic::List_1<::System::Action*>* _events; // 0x0
	};
}
