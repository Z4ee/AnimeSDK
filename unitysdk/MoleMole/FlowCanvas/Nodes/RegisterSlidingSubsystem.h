#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_REGISTERSLIDINGSUBSYSTEM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0311D0)
#define MOLEMOLE_FLOWCANVAS_NODES_REGISTERSLIDINGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A031290)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int RegisterSlidingSubsystem_TypeDefinitionIndex = 69028;

	class RegisterSlidingSubsystem : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_REGISTERSLIDINGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_REGISTERSLIDINGSUBSYSTEM_INVOKE_OFFSET))(this);
		}
	};
}
