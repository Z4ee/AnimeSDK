#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_B435EF21ED19656E_Enum_3_A052031B9B6F8523.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x123329D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x12332BD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetRallyQuestCondProgress_TypeDefinitionIndex = 53134;

	class LD_SetRallyQuestCondProgress : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::Int32, ::Class_5_B435EF21ED19656E_Enum_3_A052031B9B6F8523, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 rallyQuestID, ::Class_5_B435EF21ED19656E_Enum_3_A052031B9B6F8523 operation, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_5_B435EF21ED19656E_Enum_3_A052031B9B6F8523, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET))(this, rallyQuestID, operation, value);
		}
	};
}
