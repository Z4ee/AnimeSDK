#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }

namespace R3
{
	inline static constexpr unsigned int Switch_1_TypeDefinitionIndex = 35271;

	template <typename T>
	class Switch_1 : public ::R3::Observable_1<T>
	{
	public:
		::R3::Observable_1<::R3::Observable_1<T>*>* _sources_P; // 0x0
	};
}
