#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E0E0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0E240)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRegisterFightScore_TypeDefinitionIndex = 48691;

	class LDRegisterFightScore : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 fightScore, ::System::Int32 extraFightScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE_INVOKE_OFFSET))(this, fightScore, extraFightScore);
		}
	};
}
