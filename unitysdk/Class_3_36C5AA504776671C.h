#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetInCameraScreenScope; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36C5AA504776671C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1165AA40)
#define CLASS_3_36C5AA504776671C__CTOR_OFFSET UNITYSDK_OFFSET(0x1165AA10)

inline static constexpr unsigned int Class_3_36C5AA504776671C_TypeDefinitionIndex = 52241;

class Class_3_36C5AA504776671C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetInCameraScreenScope*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + CLASS_3_36C5AA504776671C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C5AA504776671C_EVALUATE_OFFSET))(this);
	}
};
