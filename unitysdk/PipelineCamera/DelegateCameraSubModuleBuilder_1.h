#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int DelegateCameraSubModuleBuilder_1_TypeDefinitionIndex = 38254;

	template <typename T>
	class DelegateCameraSubModuleBuilder_1 : public ::System::Object
	{
	public:
		::System::Func_1<::PipelineCamera::ICameraSubModule_1<T>*>* _Construct_k__BackingField; // 0x0
		::System::Action_1<::PipelineCamera::ICameraSubModule_1<T>*>* _OnConstruct_k__BackingField; // 0x0
	};
}
