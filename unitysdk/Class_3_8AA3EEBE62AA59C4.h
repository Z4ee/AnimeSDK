#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8AA3EEBE62AA59C4_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD230090)
#define CLASS_3_8AA3EEBE62AA59C4__CTOR_OFFSET UNITYSDK_OFFSET(0xD230060)

inline static constexpr unsigned int Class_3_8AA3EEBE62AA59C4_TypeDefinitionIndex = 54786;

class Class_3_8AA3EEBE62AA59C4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + CLASS_3_8AA3EEBE62AA59C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AA3EEBE62AA59C4_EVALUATE_OFFSET))(this);
	}
};
