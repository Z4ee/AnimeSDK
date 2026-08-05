#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_FUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A05BFC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_FUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05C140)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextNormalSelectionCount_Func_TypeDefinitionIndex = 89786;

	class LD_AbyssS2_NextNormalSelectionCount_Func : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_FUNC__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_FUNC_INVOKE_OFFSET))(this);
		}
	};
}
