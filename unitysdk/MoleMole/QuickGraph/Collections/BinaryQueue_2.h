#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
template <typename T1, typename T2> class Class_1_DB815AE44A5D477B;

namespace MoleMole::QuickGraph::Collections
{
	inline static constexpr unsigned int BinaryQueue_2_TypeDefinitionIndex = 28903;

	template <typename TVertex, typename TDistance>
	class BinaryQueue_2 : public ::System::Object
	{
	public:
		::System::Func_2<TVertex, TDistance>* distances; // 0x0
		::Class_1_DB815AE44A5D477B<TDistance, TVertex>* heap; // 0x0
	};
}
