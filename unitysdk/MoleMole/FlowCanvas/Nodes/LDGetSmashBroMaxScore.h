#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1580DF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1580E1A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSmashBroMaxScore_TypeDefinitionIndex = 85869;

	class LDGetSmashBroMaxScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE_INVOKE_OFFSET))(this);
		}
	};
}
