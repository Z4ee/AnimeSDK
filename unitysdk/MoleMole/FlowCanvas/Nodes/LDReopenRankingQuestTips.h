#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREOPENRANKINGQUESTTIPS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B80B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREOPENRANKINGQUESTTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x16B80C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREOPENRANKINGQUESTTIPS__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x16B80C70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReopenRankingQuestTips_TypeDefinitionIndex = 56897;

	class LDReopenRankingQuestTips : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* inFlow; // 0xA8
		::FlowCanvas::FlowOutput* outFlow; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREOPENRANKINGQUESTTIPS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREOPENRANKINGQUESTTIPS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREOPENRANKINGQUESTTIPS__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
