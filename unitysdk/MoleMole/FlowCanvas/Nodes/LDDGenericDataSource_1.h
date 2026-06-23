#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDGenericDataSource_1_TypeDefinitionIndex = 66682;

	template <typename T>
	class LDDGenericDataSource_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* dataSource; // 0x0
		::System::Int32 currentIndex; // 0x0
	};
}
