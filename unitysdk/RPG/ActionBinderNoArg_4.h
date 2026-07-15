#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class ActionBinderNoArg_4; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinderNoArg_4_TypeDefinitionIndex = 6725;

	template <typename T1, typename T2, typename T3, typename T4>
	class ActionBinderNoArg_4 : public ::RPG::DelegateBinder_4<::RPG::ActionBinderNoArg_4<T1, T2, T3, T4>*, ::System::Action_4<T1, T2, T3, T4>*, ::System::ValueTuple_4<T1, T2, T3, T4>, ::System::Action*>
	{
	public:
	};
}
