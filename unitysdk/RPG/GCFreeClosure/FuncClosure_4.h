#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class FuncByRef_6; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_4_TypeDefinitionIndex = 6854;

	template <typename TInput0, typename TInput1, typename TInput2, typename TInput3>
	struct FuncClosure_4
	{
		::Struct_2_6C64084003D66585 _context; // 0x0
		::RPG::GCFreeClosure::FuncByRef_6<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2, TInput3, ::Struct_2_3906C24C646CC83F>* _wrapper; // 0x0
	};
}
