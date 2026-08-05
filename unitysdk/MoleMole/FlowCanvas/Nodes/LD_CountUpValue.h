#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x118C0D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x118C0DE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CountUpValue_TypeDefinitionIndex = 66888;

	class LD_CountUpValue : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_COUNTUPVALUE_INVOKE_OFFSET))(this);
		}
	};
}
