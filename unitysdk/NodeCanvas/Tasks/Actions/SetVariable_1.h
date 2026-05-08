#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetVariable_1_TypeDefinitionIndex = 27560;

	template <typename T>
	class SetVariable_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* valueA; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* valueB; // 0x0
	};
}
