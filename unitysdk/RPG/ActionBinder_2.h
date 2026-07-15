#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"

namespace RPG { template <typename T1, typename T2> class ActionBinder_2; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinder_2_TypeDefinitionIndex = 6726;

	template <typename P, typename T1>
	class ActionBinder_2 : public ::RPG::DelegateBinder_4<::RPG::ActionBinder_2<P, T1>*, ::System::Action_2<P, T1>*, T1, ::System::Action_1<P>*>
	{
	public:
	};
}
