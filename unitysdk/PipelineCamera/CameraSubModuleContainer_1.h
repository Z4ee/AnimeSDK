#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSubModuleContainer_1_Item.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleInternal_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleContainer_1_TypeDefinitionIndex = 37531;

	template <typename T>
	class CameraSubModuleContainer_1 : public ::System::Object
	{
	public:
		::System::Boolean _autoInvokeBlending; // 0x0
		::System::Boolean _isActiveStatusDirty; // 0x0
		::Il2CppArray<::System::Collections::Generic::List_1<::PipelineCamera::CameraSubModuleContainer_1_Item<T>>*>* _items; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::ICameraSubModuleInternal_1<T>*>* _cachedSubModules; // 0x0
		::PipelineCamera::CameraSubModuleEvaluateContext_1<T> _evaluationContext; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* _itemDictionary; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _cachedBlenderBuilder; // 0x0
	};
}
