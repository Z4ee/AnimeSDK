#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase.h"

namespace SGF::SEvent { template <typename T1, typename T2, typename T3> class Signal_3; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int Signal_3_TypeDefinitionIndex = 8088;

	template <typename T1, typename T2, typename T3>
	class Signal_3 : public ::SGF::SEvent::SignalBase
	{
	public:
	};
}
