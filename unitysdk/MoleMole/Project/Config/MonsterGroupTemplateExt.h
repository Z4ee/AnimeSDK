#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_93.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_161.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT_SPLITMONSTERID_OFFSET UNITYSDK_OFFSET(0x11650840)
#define MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11650830)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MonsterGroupTemplateExt_TypeDefinitionIndex = 71172;

	class MonsterGroupTemplateExt : public ::Class_1_5DA2E7556103D5A3_93
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_161 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_161, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		static ::System::Boolean SplitMonsterID(::System::String* monsterConfig, ::System::Int32& monsterId, ::System::Int32& aiId)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MONSTERGROUPTEMPLATEEXT_SPLITMONSTERID_OFFSET))(monsterConfig, monsterId, aiId);
		}
	};
}
