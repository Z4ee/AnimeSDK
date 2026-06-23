#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITFIXEDCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1160B290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITFIXEDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1160B3E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitFixedCamera_TypeDefinitionIndex = 42019;

	class LDExitFixedCamera : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITFIXEDCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITFIXEDCAMERA_INVOKE_OFFSET))(this);
		}
	};
}
