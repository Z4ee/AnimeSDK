#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TriggerBase_2.h"

namespace Foundation { template <typename T1, typename T2> class TriggerBase_2_Event; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace Foundation
{
	inline static constexpr unsigned int Trigger_5_TypeDefinitionIndex = 8132;

	template <typename Key, typename T1, typename T2, typename T3, typename T4>
	class Trigger_5 : public ::Foundation::TriggerBase_2<Key, ::System::Action_4<T1, T2, T3, T4>*>
	{
	public:
	};
}
