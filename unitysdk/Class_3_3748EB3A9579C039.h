#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsBattleEventEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3748EB3A9579C039_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15705610)
#define CLASS_3_3748EB3A9579C039__CTOR_OFFSET UNITYSDK_OFFSET(0x157055E0)

inline static constexpr unsigned int Class_3_3748EB3A9579C039_TypeDefinitionIndex = 54847;

class Class_3_3748EB3A9579C039 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsBattleEventEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3748EB3A9579C039__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3748EB3A9579C039_EVALUATE_OFFSET))(this);
	}
};
