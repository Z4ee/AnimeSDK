#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2, typename T3> class PredicateBinder_3; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG
{
	inline static constexpr unsigned int PredicateBinder_3_TypeDefinitionIndex = 6736;

	template <typename P, typename T1, typename T2>
	class PredicateBinder_3 : public ::RPG::DelegateBinder_4<::RPG::PredicateBinder_3<P, T1, T2>*, ::System::Func_4<P, T1, T2, ::System::Boolean>*, ::System::ValueTuple_2<T1, T2>, ::System::Predicate_1<P>*>
	{
	public:
	};
}
