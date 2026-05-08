#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { class IEventData; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEventValue_1_TypeDefinitionIndex = 27113;

	template <typename T>
	class CheckEventValue_1 : public ::NodeCanvas::Framework::ConditionTask_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* value; // 0x0
	};
}
