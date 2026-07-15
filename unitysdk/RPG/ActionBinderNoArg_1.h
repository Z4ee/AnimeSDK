#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"

namespace RPG { template <typename T> class ActionBinderNoArg_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinderNoArg_1_TypeDefinitionIndex = 6722;

	template <typename T1>
	class ActionBinderNoArg_1 : public ::RPG::DelegateBinder_4<::RPG::ActionBinderNoArg_1<T1>*, ::System::Action_1<T1>*, T1, ::System::Action*>
	{
	public:
	};
}
