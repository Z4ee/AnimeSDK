#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RA_ByContainEntityTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CCE201A5F30FFFD6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9532840)
#define CLASS_3_CCE201A5F30FFFD6__CTOR_OFFSET UNITYSDK_OFFSET(0x9532810)

inline static constexpr unsigned int Class_3_CCE201A5F30FFFD6_TypeDefinitionIndex = 48091;

class Class_3_CCE201A5F30FFFD6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RA_ByContainEntityTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + CLASS_3_CCE201A5F30FFFD6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCE201A5F30FFFD6_EVALUATE_OFFSET))(this);
	}
};
