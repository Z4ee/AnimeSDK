#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { class IEventData; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEvent_1_TypeDefinitionIndex = 29938;

	template <typename T>
	class CheckEvent_1 : public ::NodeCanvas::Framework::ConditionTask_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* saveEventValue; // 0x0
	};
}
