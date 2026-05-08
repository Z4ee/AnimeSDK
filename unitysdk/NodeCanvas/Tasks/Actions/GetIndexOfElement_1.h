#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetIndexOfElement_1_TypeDefinitionIndex = 26616;

	template <typename T>
	class GetIndexOfElement_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<T>*>* targetList; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* targetElement; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* saveIndexAs; // 0x0
	};
}
