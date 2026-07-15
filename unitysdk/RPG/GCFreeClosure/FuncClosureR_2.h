#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class FuncByRef_4; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class FuncByRef_3; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2> class FuncByRef_2; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_2_TypeDefinitionIndex = 6839;

	template <typename TInput0, typename TReturn>
	struct FuncClosureR_2
	{
		::RPG::GCFreeClosure::FuncClosure_1<TInput0> _closure; // 0x0
	};
}
