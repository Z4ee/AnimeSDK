#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDENDHPCHALLENGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1260A260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDHPCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1260A4E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEndHpChallenge_TypeDefinitionIndex = 56072;

	class LDEndHpChallenge : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENDHPCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENDHPCHALLENGE_INVOKE_OFFSET))(this);
		}
	};
}
