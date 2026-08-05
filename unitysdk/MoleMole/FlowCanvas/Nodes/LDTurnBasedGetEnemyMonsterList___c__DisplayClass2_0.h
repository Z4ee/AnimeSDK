#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class EnemyWaveInformTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1907C1D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__DISPLAYCLASS2_0__ONGRAPHSTARTED_B__0_OFFSET UNITYSDK_OFFSET(0x1907C1E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEnemyMonsterList___c__DisplayClass2_0_TypeDefinitionIndex = 45321;

	class LDTurnBasedGetEnemyMonsterList___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Int32 levelID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnGraphStarted_b__0(::MoleMole::Project::Config::EnemyWaveInformTemplateExt* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Project::Config::EnemyWaveInformTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__DISPLAYCLASS2_0__ONGRAPHSTARTED_B__0_OFFSET))(this, v);
		}
	};
}
