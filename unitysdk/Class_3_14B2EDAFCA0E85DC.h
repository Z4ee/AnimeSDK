#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAnyNpcMonsterInRange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_14B2EDAFCA0E85DC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x153D4320)
#define CLASS_3_14B2EDAFCA0E85DC_METHOD_3_28B326313EE1A32B_OFFSET UNITYSDK_OFFSET(0x153D3B50)
#define CLASS_3_14B2EDAFCA0E85DC_METHOD_3_AA4447732A4FF990_OFFSET UNITYSDK_OFFSET(0x153D3F80)
#define CLASS_3_14B2EDAFCA0E85DC_METHOD_3_E6652160B553EF75_OFFSET UNITYSDK_OFFSET(0x153D3CB0)
#define CLASS_3_14B2EDAFCA0E85DC__CTOR_OFFSET UNITYSDK_OFFSET(0x153D3B20)

inline static constexpr unsigned int Class_3_14B2EDAFCA0E85DC_TypeDefinitionIndex = 54669;

class Class_3_14B2EDAFCA0E85DC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAnyNpcMonsterInRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + CLASS_3_14B2EDAFCA0E85DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_28B326313EE1A32B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_14B2EDAFCA0E85DC_METHOD_3_28B326313EE1A32B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E6652160B553EF75(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_14B2EDAFCA0E85DC_METHOD_3_E6652160B553EF75_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_AA4447732A4FF990(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_14B2EDAFCA0E85DC_METHOD_3_AA4447732A4FF990_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B2EDAFCA0E85DC_EVALUATE_OFFSET))(this);
	}
};
