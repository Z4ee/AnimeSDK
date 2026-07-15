#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int Promise_1___c__DisplayClass64_0_1_TypeDefinitionIndex = 9558;

	template <typename PromisedT, typename ConvertedT>
	class Promise_1___c__DisplayClass64_0_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x0
	};
}
