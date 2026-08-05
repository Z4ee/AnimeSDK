#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class ComponentMaskFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace Nap::NapECS { template <typename T> class EcsEntityTaskParam_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentTask_1_TypeDefinitionIndex = 38043;

	template <typename T1>
	struct EcsComponentTask_1
	{
		::Nap::NapECS::ComponentMaskFilter* _filter; // 0x0
		::Nap::NapECS::ComponentMask _componentsToRead; // 0x0
		::Nap::NapECS::ComponentMask _componentsToWrite; // 0x0
		::Nap::NapECS::EcsEntityTaskParam_1<T1>* _param1; // 0x0
	};
}
