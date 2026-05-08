#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraDataProcessorSubModuleConfig_1___c__DisplayClass16_0_2_TypeDefinitionIndex = 36409;

	template <typename T, typename TPriority, typename TChannel>
	class CameraDataProcessorSubModuleConfig_1___c__DisplayClass16_0_2 : public ::System::Object
	{
	public:
		::System::Func_4<T, T, TChannel, T>* maskFunc; // 0x0
	};
}
