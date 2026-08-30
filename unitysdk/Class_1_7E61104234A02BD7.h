#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_7E61104234A02BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x18F35810)

inline static constexpr unsigned int Class_1_7E61104234A02BD7_TypeDefinitionIndex = 56374;

class Class_1_7E61104234A02BD7 : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* JGNEPMDIHEC; // 0x10
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
	::Class_3_07C3C4D2990C49EE* MGEBFBDCNHM; // 0x20
	::Class_3_07C3C4D2990C49EE* CMFJBFKOFDC; // 0x28
	::RPG::GameCore::BattleQTEBaseConfig* COKHBDEGLIA; // 0x30
	::Class_3_07C3C4D2990C49EE* CGJEGFIAMIK; // 0x38
	::System::Single MCEAIMBIHGH; // 0x40

	::System::Void _ctor(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7E61104234A02BD7__CTOR_OFFSET))(this, a1, a2);
	}
};
