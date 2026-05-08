#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBaseEx.h"

namespace SGF::SEvent { template <typename T1, typename T2, typename T3> class SignalEx_3; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalEx_3_TypeDefinitionIndex = 7913;

	template <typename T1, typename T2, typename T3>
	class SignalEx_3 : public ::SGF::SEvent::SignalBaseEx
	{
	public:
	};
}
