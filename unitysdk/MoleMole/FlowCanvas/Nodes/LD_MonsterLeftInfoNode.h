#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_4.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERLEFTINFONODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x154215E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERLEFTINFONODE_QUERYMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x15421650)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERLEFTINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x154219A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MonsterLeftInfoNode_TypeDefinitionIndex = 72660;

	class LD_MonsterLeftInfoNode : public ::FlowCanvas::Nodes::PureFunctionNode_4<::System::Int32, ::System::Boolean, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERLEFTINFONODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean isAll, ::MoleMole::Config::MonsterStrengthType monsterStrength, ::System::Boolean isUpgrade)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERLEFTINFONODE_INVOKE_OFFSET))(this, isAll, monsterStrength, isUpgrade);
		}

		static ::System::Int32 QueryMonsterCount(::System::Boolean isAll, ::MoleMole::Config::MonsterStrengthType monsterStrength, ::System::Boolean isUpgrade)
		{
			return ((::System::Int32(*)(::System::Boolean, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERLEFTINFONODE_QUERYMONSTERCOUNT_OFFSET))(isAll, monsterStrength, isUpgrade);
		}
	};
}
