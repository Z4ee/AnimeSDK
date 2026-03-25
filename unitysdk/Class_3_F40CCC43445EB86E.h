#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsEvolveBuildCountDownItemShow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F40CCC43445EB86E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x118817B0)
#define CLASS_3_F40CCC43445EB86E__CTOR_OFFSET UNITYSDK_OFFSET(0x11881780)

inline static constexpr unsigned int Class_3_F40CCC43445EB86E_TypeDefinitionIndex = 43731;

class Class_3_F40CCC43445EB86E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + CLASS_3_F40CCC43445EB86E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F40CCC43445EB86E_EVALUATE_OFFSET))(this);
	}
};
