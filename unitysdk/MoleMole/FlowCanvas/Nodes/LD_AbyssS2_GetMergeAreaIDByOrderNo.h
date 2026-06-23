#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO_INVOKE_OFFSET UNITYSDK_OFFSET(0x182DD870)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO__CTOR_OFFSET UNITYSDK_OFFSET(0x182DDAE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetMergeAreaIDByOrderNo_TypeDefinitionIndex = 63940;

	class LD_AbyssS2_GetMergeAreaIDByOrderNo : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 qryIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO_INVOKE_OFFSET))(this, qryIndex);
		}
	};
}
