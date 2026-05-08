#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System::Collections { class IList; }

#define FLOWCANVAS_NODES_CLEARLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A2943E0)
#define FLOWCANVAS_NODES_CLEARLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2944B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ClearList_TypeDefinitionIndex = 27795;

	class ClearList : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Collections::IList*, ::System::Collections::IList*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CLEARLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::IList* Invoke(::System::Collections::IList* list)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CLEARLIST_INVOKE_OFFSET))(this, list);
		}
	};
}
