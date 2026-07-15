#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsHitAllCallBackStack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_54CD8E97E7C14C14_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D88740)
#define CLASS_3_54CD8E97E7C14C14__CTOR_OFFSET UNITYSDK_OFFSET(0x17D88710)

inline static constexpr unsigned int Class_3_54CD8E97E7C14C14_TypeDefinitionIndex = 52189;

class Class_3_54CD8E97E7C14C14 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsHitAllCallBackStack*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + CLASS_3_54CD8E97E7C14C14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54CD8E97E7C14C14_EVALUATE_OFFSET))(this);
	}
};
