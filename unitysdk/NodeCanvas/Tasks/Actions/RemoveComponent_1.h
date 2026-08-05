#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int RemoveComponent_1_TypeDefinitionIndex = 30158;

	template <typename T>
	class RemoveComponent_1 : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::System::Boolean immediately; // 0x0
	};
}
