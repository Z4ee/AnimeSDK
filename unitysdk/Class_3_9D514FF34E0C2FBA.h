#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonBattleEventMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9D514FF34E0C2FBA_METHOD_3_13A409B5C22A5391_OFFSET UNITYSDK_OFFSET(0x1142C630)
#define CLASS_3_9D514FF34E0C2FBA_METHOD_3_906EBAD7AEE08C52_OFFSET UNITYSDK_OFFSET(0x1142CA30)
#define CLASS_3_9D514FF34E0C2FBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1142C5B0)
#define CLASS_3_9D514FF34E0C2FBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1142C560)

inline static constexpr unsigned int Class_3_9D514FF34E0C2FBA_TypeDefinitionIndex = 44593;

class Class_3_9D514FF34E0C2FBA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SummonBattleEventMonster*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonBattleEventMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonBattleEventMonster*))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_13A409B5C22A5391(::RPG::GameCore::SummonMonsterData* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SummonMonsterData*))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA_METHOD_3_13A409B5C22A5391_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_906EBAD7AEE08C52()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA_METHOD_3_906EBAD7AEE08C52_OFFSET))(this);
	}
};
