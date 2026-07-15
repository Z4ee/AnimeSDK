#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncByRef_5; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class FuncByRef_4; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class FuncByRef_3; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2> class FuncByRef_2; }
namespace RPG::GCFreeClosure { template <typename T> class ActionByRef_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int FuncClosure_1_TypeDefinitionIndex = 6830;

	template <typename TInput0>
	struct FuncClosure_1
	{
		::Struct_2_6C64084003D66585 _context; // 0x0
		::RPG::GCFreeClosure::FuncByRef_3<::Struct_2_6C64084003D66585, TInput0, ::Struct_2_3906C24C646CC83F>* _wrapper; // 0x0
	};
}
