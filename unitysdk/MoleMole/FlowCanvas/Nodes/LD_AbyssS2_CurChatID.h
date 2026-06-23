#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID_INVOKE_OFFSET UNITYSDK_OFFSET(0x191248C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID__CTOR_OFFSET UNITYSDK_OFFSET(0x19124950)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CurChatID_TypeDefinitionIndex = 57694;

	class LD_AbyssS2_CurChatID : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID_INVOKE_OFFSET))(this);
		}
	};
}
