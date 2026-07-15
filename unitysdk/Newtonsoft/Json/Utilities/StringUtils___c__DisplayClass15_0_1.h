#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int StringUtils___c__DisplayClass15_0_1_TypeDefinitionIndex = 9347;

	template <typename TSource>
	class StringUtils___c__DisplayClass15_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<TSource, ::System::String*>* valueSelector; // 0x0
		::System::String* testValue; // 0x0
	};
}
