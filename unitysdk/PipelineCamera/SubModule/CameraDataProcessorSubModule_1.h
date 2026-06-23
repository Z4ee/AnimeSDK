#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/SubModule/CameraDataProcessorSubModuleConfig_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraDataProcessorSubModule_1_TypeDefinitionIndex = 38018;

	template <typename T>
	class CameraDataProcessorSubModule_1 : public ::System::Object
	{
	public:
		::System::Int32 _priority; // 0x0
		::Foundation::Unreal::FName _debugName; // 0x0
		::System::Nullable_1<T> _lastResult; // 0x0
		::System::Int32 _activeChannel; // 0x0
		::System::Func_4<T, T, ::System::Int32, T>* _maskFunction; // 0x0
		::System::Func_3<T, T, T>* _processor; // 0x0
	};
}
