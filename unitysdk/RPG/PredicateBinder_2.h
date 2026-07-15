#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"

namespace RPG { template <typename T1, typename T2> class PredicateBinder_2; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG
{
	inline static constexpr unsigned int PredicateBinder_2_TypeDefinitionIndex = 6735;

	template <typename P, typename T1>
	class PredicateBinder_2 : public ::RPG::DelegateBinder_4<::RPG::PredicateBinder_2<P, T1>*, ::System::Func_3<P, T1, ::System::Boolean>*, T1, ::System::Predicate_1<P>*>
	{
	public:
	};
}
