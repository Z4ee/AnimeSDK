#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Tasks::Conditions { template <typename T> class CheckCSharpEventValue_0_1; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedEventInfo; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCSharpEventValue_1_TypeDefinitionIndex = 27275;

	template <typename T>
	class CheckCSharpEventValue_1 : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::ParadoxNotion::Serialization::SerializedEventInfo* eventInfo; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* checkValue; // 0x0
		::System::Delegate* handler; // 0x0
	};
}
