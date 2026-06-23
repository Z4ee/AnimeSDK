#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendMessageToType_1_TypeDefinitionIndex = 29402;

	template <typename T>
	class SendMessageToType_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* message; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Object*>* argument; // 0x0
	};
}
