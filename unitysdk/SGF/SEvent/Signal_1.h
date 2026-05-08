#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase.h"

namespace SGF::SEvent { template <typename T> class Signal_1; }
namespace System { template <typename T> class Action_1; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int Signal_1_TypeDefinitionIndex = 8007;

	template <typename T>
	class Signal_1 : public ::SGF::SEvent::SignalBase
	{
	public:
	};
}
