#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T> class Switch_1__Switch; }
namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int Switch_1_SwitchObserver_TypeDefinitionIndex = 35273;

	template <typename T>
	class Switch_1_SwitchObserver : public ::R3::Observer_1<T>
	{
	public:
		::R3::Switch_1__Switch<T>* _parent_P; // 0x0
		::System::UInt64 _id_P; // 0x0
	};
}
