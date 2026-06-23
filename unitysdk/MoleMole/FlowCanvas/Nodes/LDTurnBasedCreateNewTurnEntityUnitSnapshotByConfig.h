#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

class Class_2_33E254D31CBA72CB;
namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x15119510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15119680)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig_TypeDefinitionIndex = 48792;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::Class_2_33E254D31CBA72CB*, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET))(this);
		}

		::Class_2_33E254D31CBA72CB* Invoke(::System::UInt32 entityID, ::System::Int32 configID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>* unlockedSkills)
		{
			return ((::Class_2_33E254D31CBA72CB*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET))(this, entityID, configID, unlockedSkills);
		}
	};
}
