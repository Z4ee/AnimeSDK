#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetComponent_1_TypeDefinitionIndex = 26460;

	template <typename T>
	class GetComponent_1 : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* saveAs; // 0x0
	};
}
