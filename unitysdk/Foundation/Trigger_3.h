#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TriggerBase_2.h"

namespace Foundation { template <typename T1, typename T2> class TriggerBase_2_Event; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace Foundation
{
	inline static constexpr unsigned int Trigger_3_TypeDefinitionIndex = 7889;

	template <typename Key, typename T1, typename T2>
	class Trigger_3 : public ::Foundation::TriggerBase_2<Key, ::System::Action_2<T1, T2>*>
	{
	public:
	};
}
