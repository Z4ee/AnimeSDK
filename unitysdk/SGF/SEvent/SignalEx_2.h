#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBaseEx.h"

namespace SGF::SEvent { template <typename T1, typename T2> class SignalEx_2; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalEx_2_TypeDefinitionIndex = 8057;

	template <typename T1, typename T2>
	class SignalEx_2 : public ::SGF::SEvent::SignalBaseEx
	{
	public:
	};
}
