#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace RPGTools
{
	inline static constexpr unsigned int StructWrapper_1_TypeDefinitionIndex = 46020;

	template <typename T>
	class StructWrapper_1 : public ::System::Object
	{
	public:
		T Value; // 0x0
		::System::Func_1<T>* GetValue; // 0x0
		::System::Action_1<T>* SetValue; // 0x0
	};
}
