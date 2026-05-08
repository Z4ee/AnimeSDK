#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendMessage_1_TypeDefinitionIndex = 27669;

	template <typename T>
	class SendMessage_1 : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* methodName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* argument; // 0x0
	};
}
