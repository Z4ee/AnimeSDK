#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase.h"

namespace SGF::SEvent { template <typename T1, typename T2, typename T3, typename T4> class Signal_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int Signal_4_TypeDefinitionIndex = 8029;

	template <typename T1, typename T2, typename T3, typename T4>
	class Signal_4 : public ::SGF::SEvent::SignalBase
	{
	public:
	};
}
