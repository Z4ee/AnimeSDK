#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionByRef_5; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_4_TypeDefinitionIndex = 6808;

	template <typename TInput0, typename TInput1, typename TInput2, typename TInput3>
	struct ActionClosure_4
	{
		::Struct_2_6C64084003D66585 _context; // 0x0
		::RPG::GCFreeClosure::ActionByRef_5<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, TInput3>* _wrapper; // 0x0
	};
}
