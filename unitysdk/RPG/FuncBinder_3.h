#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/DelegateBinder_4.h"

namespace RPG { template <typename T1, typename T2, typename T3> class FuncBinder_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG
{
	inline static constexpr unsigned int FuncBinder_3_TypeDefinitionIndex = 6731;

	template <typename P, typename T1, typename R>
	class FuncBinder_3 : public ::RPG::DelegateBinder_4<::RPG::FuncBinder_3<P, T1, R>*, ::System::Func_3<P, T1, R>*, T1, ::System::Func_2<P, R>*>
	{
	public:
	};
}
