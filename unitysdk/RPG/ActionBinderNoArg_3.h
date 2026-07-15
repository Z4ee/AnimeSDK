#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG { template <typename T1, typename T2, typename T3> class ActionBinderNoArg_3; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinderNoArg_3_TypeDefinitionIndex = 6724;

	template <typename T1, typename T2, typename T3>
	class ActionBinderNoArg_3 : public ::RPG::DelegateBinder_4<::RPG::ActionBinderNoArg_3<T1, T2, T3>*, ::System::Action_3<T1, T2, T3>*, ::System::ValueTuple_3<T1, T2, T3>, ::System::Action*>
	{
	public:
	};
}
