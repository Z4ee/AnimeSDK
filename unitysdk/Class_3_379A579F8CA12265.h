#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainsRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_379A579F8CA12265_EVALUATE_OFFSET UNITYSDK_OFFSET(0x154DF710)
#define CLASS_3_379A579F8CA12265__CTOR_OFFSET UNITYSDK_OFFSET(0x154DF6E0)

inline static constexpr unsigned int Class_3_379A579F8CA12265_TypeDefinitionIndex = 54807;

class Class_3_379A579F8CA12265 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainsRedStance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainsRedStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + CLASS_3_379A579F8CA12265__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_379A579F8CA12265_EVALUATE_OFFSET))(this);
	}
};
