#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class ActionBinder_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int ActionBinder_4_TypeDefinitionIndex = 6728;

	template <typename P, typename T1, typename T2, typename T3>
	class ActionBinder_4 : public ::RPG::DelegateBinder_4<::RPG::ActionBinder_4<P, T1, T2, T3>*, ::System::Action_4<P, T1, T2, T3>*, ::System::ValueTuple_3<T1, T2, T3>, ::System::Action_1<P>*>
	{
	public:
	};
}
