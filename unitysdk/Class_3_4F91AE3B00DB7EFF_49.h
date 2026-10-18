#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_274CDECA9C90F714;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_49_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15917B90)
#define CLASS_3_4F91AE3B00DB7EFF_49_METHOD_3_2576833B0C1AB0D0_OFFSET UNITYSDK_OFFSET(0x15917DC0)
#define CLASS_3_4F91AE3B00DB7EFF_49_METHOD_3_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0x15917D30)
#define CLASS_3_4F91AE3B00DB7EFF_49__CTOR_OFFSET UNITYSDK_OFFSET(0x15917B60)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_49_TypeDefinitionIndex = 54716;

class Class_3_4F91AE3B00DB7EFF_49 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_274CDECA9C90F714*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_274CDECA9C90F714* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_274CDECA9C90F714*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_49_EVALUATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_49_METHOD_3_73DD48D58191807C_OFFSET))(a1);
	}

	::System::Boolean Method_3_2576833B0C1AB0D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_49_METHOD_3_2576833B0C1AB0D0_OFFSET))(this, a1);
	}
};
