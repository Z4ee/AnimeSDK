#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class GameObject; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindObjectOfType_1_TypeDefinitionIndex = 31236;

	template <typename T>
	class FindObjectOfType_1 : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* saveComponentAs; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x0
	};
}
