#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTEROPENTREASURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x138393A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTEROPENTREASURE__CTOR_OFFSET UNITYSDK_OFFSET(0x13839420)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStylishRegisterOpenTreasure_TypeDefinitionIndex = 87877;

	class LDStylishRegisterOpenTreasure : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTEROPENTREASURE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTEROPENTREASURE_INVOKE_OFFSET))(this);
		}
	};
}
