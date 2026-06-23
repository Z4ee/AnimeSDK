#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsArchetype_ReadyAction_TypeDefinitionIndex = 37380;

	struct alignas(8) EcsArchetype_ReadyAction
	{
		::Nap::NapECS::EcsFilter* Filter; // 0x10
		::System::Int32 Priority; // 0x18
		::System::Int32 WaitComponentType; // 0x1C
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* Action; // 0x20
	};
}
