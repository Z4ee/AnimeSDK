#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int TryGetValue_1_TypeDefinitionIndex = 28200;

	template <typename T>
	class TryGetValue_1 : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::Dictionary_2<::System::String*, T>*>* targetDictionary; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* key; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* saveValueAs; // 0x0
	};
}
