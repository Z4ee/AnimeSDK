#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamCurrentActionAnyDirection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_52CA9B5588781D1E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15FBF490)
#define CLASS_3_52CA9B5588781D1E__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBF460)

inline static constexpr unsigned int Class_3_52CA9B5588781D1E_TypeDefinitionIndex = 50732;

class Class_3_52CA9B5588781D1E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamCurrentActionAnyDirection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + CLASS_3_52CA9B5588781D1E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52CA9B5588781D1E_EVALUATE_OFFSET))(this);
	}
};
