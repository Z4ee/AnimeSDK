#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework::Internal { class BBMappingParameter; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DTNodeNested_1_TypeDefinitionIndex = 27468;

	template <typename T>
	class DTNodeNested_1 : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>* _variablesMap; // 0x0
		T _currentInstance_k__BackingField; // 0x0
		::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>* _instances_k__BackingField; // 0x0
	};
}
