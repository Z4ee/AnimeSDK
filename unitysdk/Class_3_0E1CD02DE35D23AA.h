#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetNpcExists; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0E1CD02DE35D23AA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10B89610)
#define CLASS_3_0E1CD02DE35D23AA__CTOR_OFFSET UNITYSDK_OFFSET(0x10B895E0)

inline static constexpr unsigned int Class_3_0E1CD02DE35D23AA_TypeDefinitionIndex = 43794;

class Class_3_0E1CD02DE35D23AA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetNpcExists*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + CLASS_3_0E1CD02DE35D23AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E1CD02DE35D23AA_EVALUATE_OFFSET))(this);
	}
};
