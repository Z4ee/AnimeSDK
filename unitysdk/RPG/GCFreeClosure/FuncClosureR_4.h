#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class FuncByRef_4; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_4_TypeDefinitionIndex = 6853;

	template <typename TInput0, typename TInput1, typename TInput2, typename TReturn>
	struct FuncClosureR_4
	{
		::RPG::GCFreeClosure::FuncClosure_3<TInput0, TInput1, TInput2> _closure; // 0x0
	};
}
