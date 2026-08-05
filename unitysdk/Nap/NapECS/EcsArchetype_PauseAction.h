#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsArchetype_PauseAction_TypeDefinitionIndex = 37989;

	struct alignas(8) EcsArchetype_PauseAction
	{
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* Action; // 0x10
	};
}
