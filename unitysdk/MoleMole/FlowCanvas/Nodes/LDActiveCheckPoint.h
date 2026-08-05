#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A041C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A041E80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDActiveCheckPoint_TypeDefinitionIndex = 44745;

	class LDActiveCheckPoint : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT_INVOKE_OFFSET))(this);
		}
	};
}
