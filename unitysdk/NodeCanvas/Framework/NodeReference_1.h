#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class WeakReference_1; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int NodeReference_1_TypeDefinitionIndex = 26464;

	template <typename T>
	class NodeReference_1 : public ::System::Object
	{
	public:
		::System::String* _targetNodeUID; // 0x0
		::System::WeakReference_1<T>* _targetNodeRef; // 0x0
	};
}
