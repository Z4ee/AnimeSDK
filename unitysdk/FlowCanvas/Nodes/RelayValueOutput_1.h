#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RelayValueOutputBase.h"

namespace FlowCanvas::Nodes { class RelayValueInputBase; }
namespace FlowCanvas::Nodes { template <typename T> class RelayValueInput_1; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueOutput_1_TypeDefinitionIndex = 30231;

	template <typename T>
	class RelayValueOutput_1 : public ::FlowCanvas::Nodes::RelayValueOutputBase
	{
	public:
		::System::String* _sourceInputUID; // 0x0
		::System::WeakReference_1<::FlowCanvas::Nodes::RelayValueInputBase*>* _sourceInputRef; // 0x0
	};
}
