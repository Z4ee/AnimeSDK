#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class ActionBinderNoArg_2; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinderNoArg_2_TypeDefinitionIndex = 6723;

	template <typename T1, typename T2>
	class ActionBinderNoArg_2 : public ::RPG::DelegateBinder_4<::RPG::ActionBinderNoArg_2<T1, T2>*, ::System::Action_2<T1, T2>*, ::System::ValueTuple_2<T1, T2>, ::System::Action*>
	{
	public:
	};
}
