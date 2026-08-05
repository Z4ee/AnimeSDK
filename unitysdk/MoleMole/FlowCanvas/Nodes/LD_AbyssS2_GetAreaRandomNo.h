#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNO_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DB7750)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNO__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB7A30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaRandomNo_TypeDefinitionIndex = 80657;

	class LD_AbyssS2_GetAreaRandomNo : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean isShared)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNO_INVOKE_OFFSET))(this, isShared);
		}
	};
}
