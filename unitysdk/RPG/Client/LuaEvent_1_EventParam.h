#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int LuaEvent_1_EventParam_TypeDefinitionIndex = 56776;

	template <typename T>
	class LuaEvent_1_EventParam : public ::System::Object
	{
	public:
		::System::Action_2<::System::Object*, T>* Callback; // 0x0
		::System::Object* Listener; // 0x0
	};
}
