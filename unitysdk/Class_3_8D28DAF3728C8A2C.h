#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByPerceiveValueReachMax; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D28DAF3728C8A2C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15813EE0)
#define CLASS_3_8D28DAF3728C8A2C__CTOR_OFFSET UNITYSDK_OFFSET(0x15813EB0)

inline static constexpr unsigned int Class_3_8D28DAF3728C8A2C_TypeDefinitionIndex = 53376;

class Class_3_8D28DAF3728C8A2C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByPerceiveValueReachMax*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + CLASS_3_8D28DAF3728C8A2C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D28DAF3728C8A2C_EVALUATE_OFFSET))(this);
	}
};
