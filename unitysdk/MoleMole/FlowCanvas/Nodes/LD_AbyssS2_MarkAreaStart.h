#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREASTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x19247330)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREASTART__CTOR_OFFSET UNITYSDK_OFFSET(0x192473C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_MarkAreaStart_TypeDefinitionIndex = 61777;

	class LD_AbyssS2_MarkAreaStart : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREASTART__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 areaIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREASTART_INVOKE_OFFSET))(this, areaIndex);
		}
	};
}
