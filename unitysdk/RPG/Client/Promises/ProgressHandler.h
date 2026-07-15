#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Promises { class IRejectable; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int ProgressHandler_TypeDefinitionIndex = 9575;

	struct alignas(8) ProgressHandler
	{
		::System::Action_1<::System::Single>* callback; // 0x10
		::RPG::Client::Promises::IRejectable* rejectable; // 0x18
	};
}
