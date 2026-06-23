#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace MoleMole::QuickGraph { template <typename T> class VertexList_1; }
namespace System { class Object; }

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int VertexList_1_TypeDefinitionIndex = 28228;

	template <typename TVertex>
	class VertexList_1 : public ::System::Collections::Generic::List_1<TVertex>
	{
	public:
	};
}
