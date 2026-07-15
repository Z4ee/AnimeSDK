#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class PredicateBinder_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG
{
	inline static constexpr unsigned int PredicateBinder_4_TypeDefinitionIndex = 6737;

	template <typename P, typename T1, typename T2, typename T3>
	class PredicateBinder_4 : public ::RPG::DelegateBinder_4<::RPG::PredicateBinder_4<P, T1, T2, T3>*, ::System::Func_5<P, T1, T2, T3, ::System::Boolean>*, ::System::ValueTuple_3<T1, T2, T3>, ::System::Predicate_1<P>*>
	{
	public:
	};
}
