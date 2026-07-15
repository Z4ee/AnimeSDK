#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ObjectLoadHandler_1; }
namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int ObjectLoadHandler_1___c__DisplayClass7_0_TypeDefinitionIndex = 33872;

	template <typename TObj>
	class ObjectLoadHandler_1___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x0
		::RPG::Client::ObjectLoadHandler_1<TObj>* __4__this; // 0x0
		::System::Int32 id; // 0x0
	};
}
