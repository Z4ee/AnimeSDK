#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B85F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B86160)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetZeroLevelType_TypeDefinitionIndex = 80394;

	class LD_GetZeroLevelType : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE_INVOKE_OFFSET))(this);
		}
	};
}
