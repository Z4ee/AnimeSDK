#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamAnchorContinous; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E92C923EF4335C67_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8E13E50)
#define CLASS_3_E92C923EF4335C67__CTOR_OFFSET UNITYSDK_OFFSET(0x8E13E20)

inline static constexpr unsigned int Class_3_E92C923EF4335C67_TypeDefinitionIndex = 43025;

class Class_3_E92C923EF4335C67 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamAnchorContinous*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + CLASS_3_E92C923EF4335C67__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E92C923EF4335C67_EVALUATE_OFFSET))(this);
	}
};
