#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework::Internal { class GraphSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int GraphLoadData_TypeDefinitionIndex = 27273;

	struct alignas(8) GraphLoadData
	{
		::NodeCanvas::Framework::Internal::GraphSource* source; // 0x10
		::System::String* json; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* references; // 0x20
		::UnityEngine::Component* agent; // 0x28
		::NodeCanvas::Framework::IBlackboard* parentBlackboard; // 0x30
		::System::Boolean preInitializeSubGraphs; // 0x38
	};
}
