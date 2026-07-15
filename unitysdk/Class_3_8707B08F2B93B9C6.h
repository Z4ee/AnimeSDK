#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckTargetHPCanBeDamage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8707B08F2B93B9C6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x186D9410)
#define CLASS_3_8707B08F2B93B9C6_METHOD_3_77B09D5652002203_OFFSET UNITYSDK_OFFSET(0x186D9600)
#define CLASS_3_8707B08F2B93B9C6__CTOR_OFFSET UNITYSDK_OFFSET(0x186D93E0)

inline static constexpr unsigned int Class_3_8707B08F2B93B9C6_TypeDefinitionIndex = 52036;

class Class_3_8707B08F2B93B9C6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckTargetHPCanBeDamage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + CLASS_3_8707B08F2B93B9C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8707B08F2B93B9C6_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_77B09D5652002203(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8707B08F2B93B9C6_METHOD_3_77B09D5652002203_OFFSET))(this, a1);
	}
};
