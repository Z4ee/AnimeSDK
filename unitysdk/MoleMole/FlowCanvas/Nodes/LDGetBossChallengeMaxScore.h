#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1298D1E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1298D320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeMaxScore_TypeDefinitionIndex = 51695;

	class LDGetBossChallengeMaxScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE_INVOKE_OFFSET))(this);
		}
	};
}
