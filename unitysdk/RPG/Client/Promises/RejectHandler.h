#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Promises { class IRejectable; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int RejectHandler_TypeDefinitionIndex = 9574;

	struct alignas(8) RejectHandler
	{
		::System::Action_1<::System::Exception*>* callback; // 0x10
		::RPG::Client::Promises::IRejectable* rejectable; // 0x18
	};
}
