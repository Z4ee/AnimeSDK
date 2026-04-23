#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class QueryHoyoTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9A988158EAF6225E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12800B60)
#define CLASS_3_9A988158EAF6225E__CTOR_OFFSET UNITYSDK_OFFSET(0x12800B30)

inline static constexpr unsigned int Class_3_9A988158EAF6225E_TypeDefinitionIndex = 51969;

class Class_3_9A988158EAF6225E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::QueryHoyoTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QueryHoyoTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + CLASS_3_9A988158EAF6225E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A988158EAF6225E_EVALUATE_OFFSET))(this);
	}
};
