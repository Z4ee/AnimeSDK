#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareControlSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC3DBD65F8DE37FE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AAA280)
#define CLASS_3_BC3DBD65F8DE37FE__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAA250)

inline static constexpr unsigned int Class_3_BC3DBD65F8DE37FE_TypeDefinitionIndex = 54736;

class Class_3_BC3DBD65F8DE37FE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareControlSkillEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_3_BC3DBD65F8DE37FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC3DBD65F8DE37FE_EVALUATE_OFFSET))(this);
	}
};
