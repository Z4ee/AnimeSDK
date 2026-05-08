#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner.h"
#include "unitysdk/NodeCanvas/Framework/Graph_UpdateMode.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_1_TypeDefinitionIndex = 27131;

	template <typename T>
	class GraphOwner_1 : public ::NodeCanvas::Framework::GraphOwner
	{
	public:
		T _graph; // 0x0
		::UnityEngine::Object* _blackboard; // 0x0
	};
}
