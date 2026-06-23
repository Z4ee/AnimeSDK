#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraDataProcessorSubModuleConfig_1_TypeDefinitionIndex = 38016;

	template <typename T>
	struct CameraDataProcessorSubModuleConfig_1
	{
		::System::Int32 _ActiveChannel_k__BackingField; // 0x0
		::System::Int32 _Priority_k__BackingField; // 0x0
		::System::String* _DebugName_k__BackingField; // 0x0
		::System::Func_4<T, T, ::System::Int32, T>* _MaskFunc_k__BackingField; // 0x0
		::System::Func_3<T, T, T>* _ProcessFunc_k__BackingField; // 0x0
	};
}
