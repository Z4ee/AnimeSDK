#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindObjectsOfType_1_TypeDefinitionIndex = 27567;

	template <typename T>
	class FindObjectsOfType_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveGameObjects; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<T>*>* saveComponents; // 0x0
	};
}
