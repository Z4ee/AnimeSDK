#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T> class ConnectedReactiveProperty_1; }
namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int ConnectedReactiveProperty_1_Observer_TypeDefinitionIndex = 35965;

	template <typename T>
	class ConnectedReactiveProperty_1_Observer : public ::R3::Observer_1<T>
	{
	public:
		::R3::ConnectedReactiveProperty_1<T>* _parent_P; // 0x0
	};
}
