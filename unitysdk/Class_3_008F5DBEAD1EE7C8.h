#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierCallBackStatusType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_008F5DBEAD1EE7C8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1198B8A0)
#define CLASS_3_008F5DBEAD1EE7C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1198B870)

inline static constexpr unsigned int Class_3_008F5DBEAD1EE7C8_TypeDefinitionIndex = 50284;

class Class_3_008F5DBEAD1EE7C8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierCallBackStatusType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + CLASS_3_008F5DBEAD1EE7C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_008F5DBEAD1EE7C8_EVALUATE_OFFSET))(this);
	}
};
