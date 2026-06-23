#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/CameraModuleAccessPattern.h"
#include "unitysdk/PipelineCamera/Detail/ExternalValueCounter.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }
namespace PipelineCamera::Detail { class PipelineCameraCommandHandler; }
namespace PipelineCamera::Detail { template <typename T1, typename T2> class CameraModuleTracker_2; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> class Func_10; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Action_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Func_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraContext_2_TypeDefinitionIndex = 37485;

	template <typename TCameraController, typename TPlayerController>
	class CameraContext_2 : public ::System::Object
	{
	public:
		// static const ::System::Int32 EventQueueCapacity = 0x20; // 0x0
		TCameraController _ownerController; // 0x0
		::PipelineCamera::Detail::ExternalValueCounter _valueManager; // 0x0
		::PipelineCamera::WorldBasicCameraData _lastCameraData; // 0x0
		::PipelineCamera::WorldBasicCameraData _lastReferenceCameraData; // 0x0
		::UnityEngine::Camera* _mCamera; // 0x0
		::System::Single _aspectRatio; // 0x0
		::PipelineCamera::Detail::PipelineCameraCommandHandler* _cameraCommandHandlers; // 0x0
		::PipelineCamera::Detail::CameraModuleTracker_2<TCameraController, TPlayerController>* _moduleTracker; // 0x0
		::System::Int32 _referenceRotationPriority; // 0x0
		::System::Double _timestamp; // 0x0
		::System::Single _deltaTime; // 0x0
		::System::Collections::Generic::Queue_1<::System::Action*>* _internalEvents; // 0x0
	};
}
