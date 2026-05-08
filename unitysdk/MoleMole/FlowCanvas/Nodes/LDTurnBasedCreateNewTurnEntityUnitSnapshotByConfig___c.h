#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_14;
namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1499A790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1499A7D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1499A7E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c_TypeDefinitionIndex = 79235;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c**)Il2CppClass::FromTypeDefinitionIndex(LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E960);
		}
		static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::Class_3_9F091E965E210217_14*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::Class_3_9F091E965E210217_14*>**)Il2CppClass::FromTypeDefinitionIndex(LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CTOR_OFFSET))(this);
		}

		::Class_3_9F091E965E210217_14* _Invoke_b__0_0(::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo* v)
		{
			return ((::Class_3_9F091E965E210217_14*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__INVOKE_B__0_0_OFFSET))(this, v);
		}
	};
}
