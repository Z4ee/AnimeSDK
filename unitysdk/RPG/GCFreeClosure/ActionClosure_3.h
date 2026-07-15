#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6C64084003D66585.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3, typename T4> class ActionByRef_4; }
namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ActionClosure_3_TypeDefinitionIndex = 6805;

	template <typename TInput0, typename TInput1, typename TInput2>
	struct ActionClosure_3
	{
		::Struct_2_6C64084003D66585 _context; // 0x0
		::RPG::GCFreeClosure::ActionByRef_4<::Struct_2_6C64084003D66585, TInput0, TInput1, TInput2>* _wrapper; // 0x0
	};
}
