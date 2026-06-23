#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/PositionAxisDecomposer.h"
#include "unitysdk/PipelineCamera/PositionDampingAxis.h"
#include "unitysdk/PipelineCamera/SubModule/PivotLocationDamperConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTimestamp; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int PivotLocationDamper_1_TypeDefinitionIndex = 38026;

	template <typename T>
	class PivotLocationDamper_1 : public ::System::Object
	{
	public:
		::System::Int32 _priority; // 0x0
		::PipelineCamera::PositionDampingAxis _positionDampingAxis; // 0x0
		::Foundation::Unreal::FName _debugName; // 0x0
		::System::Boolean _updateByExternal; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _forceUp; // 0x0
		::PipelineCamera::ICameraTimestamp* _timestamp; // 0x0
		::System::Single _deltaTime; // 0x0
		T Damper; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _blenderBuilder; // 0x0
		::PipelineCamera::PositionAxisDecomposer _cachedDecomposer; // 0x0
		::UnityEngine::Vector3 _cachedPosition; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>>* _externalUpdateParams; // 0x0
	};
}
