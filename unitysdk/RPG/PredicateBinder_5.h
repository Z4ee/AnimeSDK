#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4, typename T5> class PredicateBinder_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG
{
	inline static constexpr unsigned int PredicateBinder_5_TypeDefinitionIndex = 6738;

	template <typename P, typename T1, typename T2, typename T3, typename T4>
	class PredicateBinder_5 : public ::RPG::DelegateBinder_4<::RPG::PredicateBinder_5<P, T1, T2, T3, T4>*, ::System::Func_6<P, T1, T2, T3, T4, ::System::Boolean>*, ::System::ValueTuple_4<T1, T2, T3, T4>, ::System::Predicate_1<P>*>
	{
	public:
	};
}
