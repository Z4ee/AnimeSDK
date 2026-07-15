#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsBodyPart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8475F35C1D70A82_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18ADCCF0)
#define CLASS_3_F8475F35C1D70A82__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADCCC0)

inline static constexpr unsigned int Class_3_F8475F35C1D70A82_TypeDefinitionIndex = 52164;

class Class_3_F8475F35C1D70A82 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsBodyPart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBodyPart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + CLASS_3_F8475F35C1D70A82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8475F35C1D70A82_EVALUATE_OFFSET))(this);
	}
};
