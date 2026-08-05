#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684F530)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1684F7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelConditionTargetNum_TypeDefinitionIndex = 81137;

	class LD_GetLevelConditionTargetNum : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 levelConditionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM_INVOKE_OFFSET))(this, levelConditionID);
		}
	};
}
