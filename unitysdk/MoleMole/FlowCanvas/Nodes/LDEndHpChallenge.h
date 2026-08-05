#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDENDHPCHALLENGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D7040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDHPCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x149D72C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEndHpChallenge_TypeDefinitionIndex = 55470;

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
