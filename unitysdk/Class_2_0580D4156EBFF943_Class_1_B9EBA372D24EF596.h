#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3FF51CE8B91EFA1B;
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }

#define CLASS_2_0580D4156EBFF943_CLASS_1_B9EBA372D24EF596__CTOR_OFFSET UNITYSDK_OFFSET(0x188F9510)

inline static constexpr unsigned int Class_2_0580D4156EBFF943_Class_1_B9EBA372D24EF596_TypeDefinitionIndex = 72220;

class Class_2_0580D4156EBFF943_Class_1_B9EBA372D24EF596 : public ::System::Object
{
public:
	::RPG::GameCore::BattleGridFightTeamTraitData* EPHPJCPMOHA; // 0x10
	::Class_1_3FF51CE8B91EFA1B* ANHEGDAFFJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_CLASS_1_B9EBA372D24EF596__CTOR_OFFSET))(this);
	}
};
