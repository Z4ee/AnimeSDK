#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG
{
	inline static constexpr unsigned int FuncBinder_4_TypeDefinitionIndex = 6732;

	template <typename P, typename T1, typename T2, typename R>
	class FuncBinder_4 : public ::RPG::DelegateBinder_4<::RPG::FuncBinder_4<P, T1, T2, R>*, ::System::Func_4<P, T1, T2, R>*, ::System::ValueTuple_2<T1, T2>, ::System::Func_2<P, R>*>
	{
	public:
	};
}
