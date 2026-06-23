#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SelectOnTag_1; }
namespace UnityEngine { class GameObject; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnTag_1___c__DisplayClass1_0_TypeDefinitionIndex = 29276;

	template <typename T>
	class SelectOnTag_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::GameObject*>* selector; // 0x0
		::FlowCanvas::Nodes::SelectOnTag_1<T>* __4__this; // 0x0
		::Il2CppArray<::FlowCanvas::ValueInput_1<T>*>* cases; // 0x0
	};
}
