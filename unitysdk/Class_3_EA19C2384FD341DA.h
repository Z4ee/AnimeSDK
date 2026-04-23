#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsHealCallBackStack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EA19C2384FD341DA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x985D600)
#define CLASS_3_EA19C2384FD341DA__CTOR_OFFSET UNITYSDK_OFFSET(0x985D5D0)

inline static constexpr unsigned int Class_3_EA19C2384FD341DA_TypeDefinitionIndex = 50437;

class Class_3_EA19C2384FD341DA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsHealCallBackStack*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + CLASS_3_EA19C2384FD341DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA19C2384FD341DA_EVALUATE_OFFSET))(this);
	}
};
