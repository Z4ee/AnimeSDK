#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsDamageCritical; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6BDA8F954793E2B9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x136782A0)
#define CLASS_3_6BDA8F954793E2B9__CTOR_OFFSET UNITYSDK_OFFSET(0x13678270)

inline static constexpr unsigned int Class_3_6BDA8F954793E2B9_TypeDefinitionIndex = 51087;

class Class_3_6BDA8F954793E2B9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsDamageCritical*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + CLASS_3_6BDA8F954793E2B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BDA8F954793E2B9_EVALUATE_OFFSET))(this);
	}
};
