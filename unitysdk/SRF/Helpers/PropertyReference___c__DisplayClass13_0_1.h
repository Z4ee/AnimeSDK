#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyReference___c__DisplayClass13_0_1_TypeDefinitionIndex = 33993;

	template <typename T>
	class PropertyReference___c__DisplayClass13_0_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* setter; // 0x0
		::System::Func_1<T>* getter; // 0x0
	};
}
