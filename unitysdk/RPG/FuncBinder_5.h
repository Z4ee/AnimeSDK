#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FuncBinder_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG
{
	inline static constexpr unsigned int FuncBinder_5_TypeDefinitionIndex = 6733;

	template <typename P, typename T1, typename T2, typename T3, typename R>
	class FuncBinder_5 : public ::RPG::DelegateBinder_4<::RPG::FuncBinder_5<P, T1, T2, T3, R>*, ::System::Func_5<P, T1, T2, T3, R>*, ::System::ValueTuple_3<T1, T2, T3>, ::System::Func_2<P, R>*>
	{
	public:
	};
}
