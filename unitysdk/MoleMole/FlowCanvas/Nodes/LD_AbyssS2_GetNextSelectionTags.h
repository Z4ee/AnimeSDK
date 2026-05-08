#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONTAGS_INVOKE_OFFSET UNITYSDK_OFFSET(0x142812E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONTAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x14281620)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetNextSelectionTags_TypeDefinitionIndex = 42051;

	class LD_AbyssS2_GetNextSelectionTags : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONTAGS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONTAGS_INVOKE_OFFSET))(this);
		}
	};
}
