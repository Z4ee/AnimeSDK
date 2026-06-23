#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

class Class_2_33E254D31CBA72CB;

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1300E0A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1300E130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfigFullSkill_TypeDefinitionIndex = 49069;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfigFullSkill : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::Class_2_33E254D31CBA72CB*, ::System::UInt32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL__CTOR_OFFSET))(this);
		}

		::Class_2_33E254D31CBA72CB* Invoke(::System::UInt32 entityID, ::System::Int32 configID)
		{
			return ((::Class_2_33E254D31CBA72CB*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL_INVOKE_OFFSET))(this, entityID, configID);
		}
	};
}
