#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2, typename T3> class ActionBinder_3; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinder_3_TypeDefinitionIndex = 6727;

	template <typename P, typename T1, typename T2>
	class ActionBinder_3 : public ::RPG::DelegateBinder_4<::RPG::ActionBinder_3<P, T1, T2>*, ::System::Action_3<P, T1, T2>*, ::System::ValueTuple_2<T1, T2>, ::System::Action_1<P>*>
	{
	public:
	};
}
