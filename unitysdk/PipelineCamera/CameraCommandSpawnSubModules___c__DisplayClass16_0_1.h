#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraCommandSpawnSubModules___c__DisplayClass16_0_1_TypeDefinitionIndex = 38140;

	template <typename T>
	class CameraCommandSpawnSubModules___c__DisplayClass16_0_1 : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<T>* subModuleContainer; // 0x0
		::PipelineCamera::CameraCommandSpawnSubModules* __4__this; // 0x0
	};
}
