#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendEventToObjects_1_TypeDefinitionIndex = 30549;

	template <typename T>
	class SendEventToObjects_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetObjects; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* eventValue; // 0x0
	};
}
