#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class LuaEvent_1_EventParam; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int LuaEvent_1_TypeDefinitionIndex = 56775;

	template <typename T>
	class LuaEvent_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LuaEvent_1_EventParam<T>*>* _Events; // 0x0
	};
}
