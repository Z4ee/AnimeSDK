#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int InsertElementToList_1_TypeDefinitionIndex = 31427;

	template <typename T>
	class InsertElementToList_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<T>*>* targetList; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* targetElement; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* targetIndex; // 0x0
	};
}
