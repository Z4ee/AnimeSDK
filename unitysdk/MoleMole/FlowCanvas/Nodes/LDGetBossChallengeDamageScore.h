#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x192406A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x19240830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeDamageScore_TypeDefinitionIndex = 72237;

	class LDGetBossChallengeDamageScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE_INVOKE_OFFSET))(this);
		}
	};
}
