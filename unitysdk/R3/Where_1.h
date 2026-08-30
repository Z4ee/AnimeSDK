#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int Where_1_TypeDefinitionIndex = 35274;

	template <typename T>
	class Where_1 : public ::R3::Observable_1<T>
	{
	public:
		::R3::Observable_1<T>* source; // 0x0
		::System::Func_2<T, ::System::Boolean>* predicate; // 0x0
	};
}
