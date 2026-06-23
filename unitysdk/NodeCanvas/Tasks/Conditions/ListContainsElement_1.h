#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int ListContainsElement_1_TypeDefinitionIndex = 29728;

	template <typename T>
	class ListContainsElement_1 : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<T>*>* targetList; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* checkElement; // 0x0
	};
}
