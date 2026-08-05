#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace UnityEngine { class Transform; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int HasComponent_1_TypeDefinitionIndex = 30540;

	template <typename T>
	class HasComponent_1 : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
	};
}
