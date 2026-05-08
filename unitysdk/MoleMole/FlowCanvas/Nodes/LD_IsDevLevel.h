#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB8600)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB8660)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IsDevLevel_TypeDefinitionIndex = 40856;

	class LD_IsDevLevel : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL_INVOKE_OFFSET))(this);
		}
	};
}
