#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TriggerBase_2.h"

namespace Foundation { template <typename T1, typename T2> class TriggerBase_2_Event; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace Foundation
{
	inline static constexpr unsigned int Trigger_4_TypeDefinitionIndex = 8188;

	template <typename Key, typename T1, typename T2, typename T3>
	class Trigger_4 : public ::Foundation::TriggerBase_2<Key, ::System::Action_3<T1, T2, T3>*>
	{
	public:
	};
}
