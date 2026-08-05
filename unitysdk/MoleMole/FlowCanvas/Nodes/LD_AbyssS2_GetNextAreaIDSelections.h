#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1907EE50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1907EFA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetNextAreaIDSelections_TypeDefinitionIndex = 64359;

	class LD_AbyssS2_GetNextAreaIDSelections : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS_INVOKE_OFFSET))(this);
		}
	};
}
