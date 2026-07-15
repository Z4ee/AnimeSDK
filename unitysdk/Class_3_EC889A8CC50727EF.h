#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasSecretWeak; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC889A8CC50727EF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17054160)
#define CLASS_3_EC889A8CC50727EF__CTOR_OFFSET UNITYSDK_OFFSET(0x17054130)

inline static constexpr unsigned int Class_3_EC889A8CC50727EF_TypeDefinitionIndex = 52144;

class Class_3_EC889A8CC50727EF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasSecretWeak*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + CLASS_3_EC889A8CC50727EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC889A8CC50727EF_EVALUATE_OFFSET))(this);
	}
};
