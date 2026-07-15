#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosure_4.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosureR_5_TypeDefinitionIndex = 6857;

	template <typename TInput0, typename TInput1, typename TInput2, typename TInput3, typename TReturn>
	struct FuncClosureR_5
	{
		::RPG::GCFreeClosure::FuncClosure_4<TInput0, TInput1, TInput2, TInput3> _closure; // 0x0
	};
}
