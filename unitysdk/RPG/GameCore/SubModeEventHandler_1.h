#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
namespace System { template <typename T> class Action_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubModeEventHandler_1_TypeDefinitionIndex = 44880;

	template <typename T>
	class SubModeEventHandler_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* _handler; // 0x0
	};
}
