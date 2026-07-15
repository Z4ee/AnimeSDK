#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_5.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class ActionBinder_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinder_6_TypeDefinitionIndex = 6730;

	template <typename P, typename T1, typename T2, typename T3, typename T4, typename T5>
	class ActionBinder_6 : public ::RPG::DelegateBinder_4<::RPG::ActionBinder_6<P, T1, T2, T3, T4, T5>*, ::System::Action_6<P, T1, T2, T3, T4, T5>*, ::System::ValueTuple_5<T1, T2, T3, T4, T5>, ::System::Action_1<P>*>
	{
	public:
	};
}
