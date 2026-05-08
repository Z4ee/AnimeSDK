#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckVariable_1_TypeDefinitionIndex = 26819;

	template <typename T>
	class CheckVariable_1 : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* valueA; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* valueB; // 0x0
	};
}
