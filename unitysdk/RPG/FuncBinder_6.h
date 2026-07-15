#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class FuncBinder_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG
{
	inline static constexpr unsigned int FuncBinder_6_TypeDefinitionIndex = 6734;

	template <typename P, typename T1, typename T2, typename T3, typename T4, typename R>
	class FuncBinder_6 : public ::RPG::DelegateBinder_4<::RPG::FuncBinder_6<P, T1, T2, T3, T4, R>*, ::System::Func_6<P, T1, T2, T3, T4, R>*, ::System::ValueTuple_4<T1, T2, T3, T4>, ::System::Func_2<P, R>*>
	{
	public:
	};
}
