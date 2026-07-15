#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Promises { class IRejectable; }
namespace System { class Action; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_ResolveHandler_TypeDefinitionIndex = 9577;

	struct alignas(8) Promise_ResolveHandler
	{
		::System::Action* callback; // 0x10
		::RPG::Client::Promises::IRejectable* rejectable; // 0x18
	};
}
