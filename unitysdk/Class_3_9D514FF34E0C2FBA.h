#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonBattleEventMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9D514FF34E0C2FBA_METHOD_3_05FBA0AE5EEFB087_OFFSET UNITYSDK_OFFSET(0xBE50B00)
#define CLASS_3_9D514FF34E0C2FBA_METHOD_3_C795D69BD8CAFE55_OFFSET UNITYSDK_OFFSET(0xBE50710)
#define CLASS_3_9D514FF34E0C2FBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE50690)
#define CLASS_3_9D514FF34E0C2FBA__CTOR_OFFSET UNITYSDK_OFFSET(0xBE50640)

inline static constexpr unsigned int Class_3_9D514FF34E0C2FBA_TypeDefinitionIndex = 55862;

class Class_3_9D514FF34E0C2FBA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SummonBattleEventMonster*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JHGPNDOGOKJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonBattleEventMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonBattleEventMonster*))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_C795D69BD8CAFE55(::RPG::GameCore::SummonMonsterData* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SummonMonsterData*))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA_METHOD_3_C795D69BD8CAFE55_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_05FBA0AE5EEFB087()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D514FF34E0C2FBA_METHOD_3_05FBA0AE5EEFB087_OFFSET))(this);
	}
};
