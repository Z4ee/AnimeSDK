#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_Chess_ByHasTargetInAlertRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B3D5ECA4D9613945_EVALUATE_OFFSET UNITYSDK_OFFSET(0xEA55FA0)
#define CLASS_3_B3D5ECA4D9613945__CTOR_OFFSET UNITYSDK_OFFSET(0xEA55F70)

inline static constexpr unsigned int Class_3_B3D5ECA4D9613945_TypeDefinitionIndex = 45177;

class Class_3_B3D5ECA4D9613945 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_ByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + CLASS_3_B3D5ECA4D9613945__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D5ECA4D9613945_EVALUATE_OFFSET))(this);
	}
};
