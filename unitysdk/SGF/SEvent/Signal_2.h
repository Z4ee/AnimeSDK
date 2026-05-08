#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase.h"

namespace SGF::SEvent { template <typename T1, typename T2> class Signal_2; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int Signal_2_TypeDefinitionIndex = 8151;

	template <typename T1, typename T2>
	class Signal_2 : public ::SGF::SEvent::SignalBase
	{
	public:
	};
}
