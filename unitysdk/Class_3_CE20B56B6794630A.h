#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamNormalAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CE20B56B6794630A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19FB2BC0)
#define CLASS_3_CE20B56B6794630A__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB2B90)

inline static constexpr unsigned int Class_3_CE20B56B6794630A_TypeDefinitionIndex = 53417;

class Class_3_CE20B56B6794630A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamNormalAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamNormalAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + CLASS_3_CE20B56B6794630A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE20B56B6794630A_EVALUATE_OFFSET))(this);
	}
};
