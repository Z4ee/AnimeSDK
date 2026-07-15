#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ObjectLoadHandler_1; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ObjectLoadHandler_1___c__DisplayClass8_0_1_TypeDefinitionIndex = 33873;

	template <typename TObj, typename T>
	class ObjectLoadHandler_1___c__DisplayClass8_0_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* action; // 0x0
		::RPG::Client::ObjectLoadHandler_1<TObj>* __4__this; // 0x0
		::System::Int32 id; // 0x0
	};
}
