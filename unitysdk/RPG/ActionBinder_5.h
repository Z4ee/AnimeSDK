#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionBinder_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinder_5_TypeDefinitionIndex = 6729;

	template <typename P, typename T1, typename T2, typename T3, typename T4>
	class ActionBinder_5 : public ::RPG::DelegateBinder_4<::RPG::ActionBinder_5<P, T1, T2, T3, T4>*, ::System::Action_5<P, T1, T2, T3, T4>*, ::System::ValueTuple_4<T1, T2, T3, T4>, ::System::Action_1<P>*>
	{
	public:
	};
}
