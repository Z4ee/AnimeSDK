#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CustomObjectWrapper.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomObjectWrapper_1_TypeDefinitionIndex = 30318;

	template <typename T>
	class CustomObjectWrapper_1 : public ::FlowCanvas::Nodes::CustomObjectWrapper
	{
	public:
		T _target; // 0x0
	};
}
