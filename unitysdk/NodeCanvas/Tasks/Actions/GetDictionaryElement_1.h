#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetDictionaryElement_1_TypeDefinitionIndex = 30488;

	template <typename T>
	class GetDictionaryElement_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::Dictionary_2<::System::String*, T>*>* dictionary; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* key; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* saveAs; // 0x0
	};
}
