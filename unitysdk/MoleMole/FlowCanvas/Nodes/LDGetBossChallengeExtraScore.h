#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A82380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A824B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeExtraScore_TypeDefinitionIndex = 67534;

	class LDGetBossChallengeExtraScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE_INVOKE_OFFSET))(this);
		}
	};
}
