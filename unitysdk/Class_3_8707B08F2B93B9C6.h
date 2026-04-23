#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckTargetHPCanBeDamage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8707B08F2B93B9C6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9854EC0)
#define CLASS_3_8707B08F2B93B9C6_METHOD_3_4AB5DA02BAEEFD54_OFFSET UNITYSDK_OFFSET(0x98550B0)
#define CLASS_3_8707B08F2B93B9C6__CTOR_OFFSET UNITYSDK_OFFSET(0x9854E90)

inline static constexpr unsigned int Class_3_8707B08F2B93B9C6_TypeDefinitionIndex = 50286;

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

	::System::Boolean Method_3_4AB5DA02BAEEFD54(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8707B08F2B93B9C6_METHOD_3_4AB5DA02BAEEFD54_OFFSET))(this, a1);
	}
};
