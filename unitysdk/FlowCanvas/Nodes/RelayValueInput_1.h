#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RelayValueInputBase.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System { class Type; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueInput_1_TypeDefinitionIndex = 31381;

	template <typename T>
	class RelayValueInput_1 : public ::FlowCanvas::Nodes::RelayValueInputBase
	{
	public:
		::System::String* identifier; // 0x0
		::FlowCanvas::ValueInput_1<T>* _port_k__BackingField; // 0x0
		::System::Boolean _cached_k__BackingField; // 0x0
		T _cachedValue_k__BackingField; // 0x0
	};
}
